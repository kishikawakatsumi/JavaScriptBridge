DESTINATIONS = ["name=iPhone Retina (3.5-inch),OS=7.0",
                "name=iPhone Retina (4-inch),OS=7.0",
                "name=iPhone Retina (4-inch 64-bit),OS=7.0"]

task :default => [:build, :clean, :test]

desc "build"
task :build, :workspace, :schemes do |t, args|
  schemes = args[:schemes].gsub(/'/, '').split(' ')
  schemes.each do |scheme|
    options = {
      workspace: "#{args[:workspace]}",
      scheme: "#{scheme}"
    }
    options = join_option(options: options, prefix: "-", seperator: " ")
    settings = {
      CODE_SIGN_IDENTITY: "",
      CODE_SIGNING_REQUIRED: "NO"
    }
    settings = join_option(options: settings, prefix: "", seperator: "=")
    sh "xcodebuild #{options} #{settings} build | xcpretty -c; exit ${PIPESTATUS[0]}"
  end
end

desc "clean"
task :clean, :workspace, :schemes do |t, args|
  schemes = args[:schemes].gsub(/'/, '').split(' ')
  schemes.each do |scheme|
    options = {
      workspace: "#{args[:workspace]}",
      scheme: "#{scheme}"
    }
    options = join_option(options: options, prefix: "-", seperator: " ")
    settings = {
      CODE_SIGN_IDENTITY: "",
      CODE_SIGNING_REQUIRED: "NO"
    }
    settings = join_option(options: settings, prefix: "", seperator: "=")
    sh "xcodebuild #{options} #{settings} clean | xcpretty -c; exit ${PIPESTATUS[0]}"
  end
end

desc "run unit tests"
task :test, :workspace, :schemes do |t, args|
  schemes = args[:schemes].gsub(/'/, '').split(' ')
  schemes.each do |scheme|
    DESTINATIONS.each do |destination|
      options = {
        workspace: "#{args[:workspace]}",
        scheme: "#{scheme}",
        configuration: "Debug",
        sdk: "iphonesimulator",
        destination: "#{destination}"
      }
      options = join_option(options: options, prefix: "-", seperator: " ")
      sh "xcodebuild test #{options} | xcpretty -tc; exit ${PIPESTATUS[0]}"
    end
  end
end

def join_option(options: {}, prefix: "", seperator: "")
_options = options.map { |k, v| %(#{prefix}#{k}#{seperator}"#{v}") }
_options = _options.join(" ")
end
