import QtQuick 2.15
import QtQuick.Controls 2.15

ApplicationWindow {
    visible: true
    width: 400
    height: 300
    title: qsTr("Qt + PostgreSQL")

    Column {
        anchors.centerIn: parent
        spacing: 10

        Text {
            text: "Connected to PostgreSQL!"
            font.pointSize: 16
        }
    }
}
