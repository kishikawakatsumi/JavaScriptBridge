var WebViewController = JSB.define('WebViewController : UIViewController <UITextFieldDelegate, UIWebViewDelegate>', {
  viewDidLoad: function() {
    self.navigationItem.title = 'Web';

    self.edgesForExtendedLayout = 0;

    var textFieldFrame = {x: 20, y: 6, width: self.view.bounds.width - (20 * 2), height: 30};

    var urlField = UITextField.alloc().initWithFrame(textFieldFrame);
    urlField.borderStyle = 2;
    urlField.textColor = UIColor.blackColor();
    urlField.delegate = self;
    urlField.placeholder = '<enter a full URL>';
    urlField.text = 'http://www.apple.com';
    urlField.backgroundColor = UIColor.whiteColor();
    urlField.autoresizingMask = 1 << 1 | 1 << 5;
    urlField.returnKeyType = 1;
    urlField.keyboardType = 3;
    urlField.autocapitalizationType = 0;
    urlField.autocorrectionType = 1;
    urlField.clearButtonMode = 3;
    self.view.addSubview(urlField);

    var webFrame = self.view.frame;
    webFrame.y += (6 * 2) + 30;
    webFrame.height -= 40;

    self.webView = UIWebView.alloc().initWithFrame(webFrame);
    
    self.webView.backgroundColor = UIColor.whiteColor();
    self.webView.scalesPageToFit = true;
    self.webView.autoresizingMask = (1 << 1 | 1 << 4 | 1 << 5);
    self.webView.delegate = self;
    self.view.addSubview(self.webView);
    
    self.webView.loadRequest(NSURLRequest.requestWithURL(NSURL.URLWithString('http://www.apple.com/')));
  },
  viewWillAppear: function(animated) {
    self.webView.delegate = self;
  },
  viewWillDisappear: function(animated) {
    self.webView.stopLoading();
    self.webView.delegate = null;

    UIApplication.sharedApplication().networkActivityIndicatorVisible = false;
  },
  textFieldShouldReturn: function(textField) {
    textField.resignFirstResponder();
    self.webView.loadRequest(NSURLRequest.requestWithURL(NSURL.URLWithString(textField.text)));

    return true;
  },
  webViewDidStartLoad: function(webView) {
    UIApplication.sharedApplication().networkActivityIndicatorVisible = true;
  },
  webViewDidFinishLoad: function(webView) {
    UIApplication.sharedApplication().networkActivityIndicatorVisible = false;
  },
  webViewDidFailLoadWithError: function(webView, error) {
    UIApplication.sharedApplication().networkActivityIndicatorVisible = false;

    var errorString = "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.01//EN\" \"http://www.w3.org/TR/html4/strict.dtd\"><html><head><meta http-equiv='Content-Type' content='text/html;charset=utf-8'><title></title></head><body><div style='width: 100%%; text-align: center; font-size: 36pt; color: red;'>An error occurred:<br>%@</div></body></html>";
    errorString = errorString.replace("%@", error.localizedDescription);
    
    self.webView.loadHTMLStringBaseURL(errorString, null);
  }
});

JSB.exports = WebViewController;
