import qbs

Application {
    Depends { name: "cpp" }
    Depends { name: "Qt.gui" }

    consoleApplication: true
    files: [
        "*.h",
        "*.cpp",
        "resources.qrc",
    ]

    Group {     // Properties for the produced executable
        fileTagsFilter: product.type
        qbs.install: true
    }
}
