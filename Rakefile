DESTINATIONS = ["name=iPhone Retina (3.5-inch),OS=7.0",
                "name=iPhone Retina (4-inch),OS=7.0",
                "name=iPhone Retina (4-inch 64-bit),OS=7.0"]

task :default => [:build, :clean, :test]

desc "build"
task :build, :workspace, :schemes do |t, args|
  schemes = args[:schemes].gsub(/'/, '').split(' ')
  schemes.each do |scheme|
    sh "xcodebuild -workspace #{args[:workspace]} -scheme #{scheme} CODE_SIGN_IDENTITY=\"\" CODE_SIGNING_REQUIRED=NO | xcpretty -c"
  end
end

desc "clean"
task :clean, :workspace, :schemes do |t, args|
  schemes = args[:schemes].gsub(/'/, '').split(' ')
  schemes.each do |scheme|
    sh "xcodebuild clean -workspace #{args[:workspace]} -scheme #{scheme} | xcpretty -c"
  end
end

desc "run unit tests"
task :test, :workspace, :schemes do |t, args|
  schemes = args[:schemes].gsub(/'/, '').split(' ')
  schemes.each do |scheme|
    DESTINATIONS.each do |destination|
      sh "xcodebuild test -workspace #{args[:workspace]} -scheme #{scheme} -configuration Debug -sdk iphonesimulator -destination \"#{destination}\" | xcpretty -c"
    end
  end
end
