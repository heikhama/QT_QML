#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QSqlDatabase>

int main(int argc, char *argv[]) {
    QGuiApplication app(argc, argv);

    connectToDB();

    QQmlApplicationEngine engine;
    const QUrl url(u"qrc:/main.qml"_qs);
    engine.load(url);

    return app.exec();
}
