import QtQuick 2.6

Rectangle {
    id: canvas
    width: 200
    height: 200
    color: "blue"

    Image {
        id: logo
        source: "images/logo.png"
        x: canvas.height / 5
    }

    Text {
        id: message
        color: "white"
        text: "Hello World!"
        anchors.centerIn: parent
    }
}
