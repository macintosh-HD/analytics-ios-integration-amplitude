// swift-tools-version:5.3

import PackageDescription

let package = Package(
    name: "SegmentAmplitude",
    platforms: [
        .iOS(.v10),
        .macOS(.v10_13)
    ],
    products: [
        .library(
            name: "SegmentAmplitude",
            targets: ["SegmentAmplitude"]
        )
    ],
    dependencies: [
        .package(name: "Amplitude", url: "https://github.com/amplitude/Amplitude-iOS.git", .upToNextMajor(from: "7.2.2")),
        .package(name: "Segment", url: "https://github.com/segmentio/analytics-ios.git", .upToNextMajor(from: "4.1.2"))
    ],
    targets: [
        .target(
            name: "SegmentAmplitude",
            dependencies: [
                "Amplitude", "Segment"
            ],
            exclude: ["Info.plist"]
        )
    ]
)
