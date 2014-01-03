WORKSPASE = "JavaScriptBridge.xcworkspace"
SCHEME = "Tests"
DESTINATIONS = ["name=iPhone Retina (3.5-inch),OS=7.0",
                "name=iPhone Retina (4-inch),OS=7.0",
                "name=iPhone Retina (4-inch 64-bit),OS=7.0"]

task :default => [:clean, :test]

desc "clean"
task :clean do
  sh "xcodebuild clean -workspace #{WORKSPASE} -scheme #{SCHEME} | xcpretty -c"
end

desc "run unit tests"
task :test do
  DESTINATIONS.each do |destination|
    sh "xcodebuild test -sdk iphonesimulator -workspace #{WORKSPASE} -scheme #{SCHEME} -configuration Debug -destination \"#{destination}\" | xcpretty -c"
  end
end
