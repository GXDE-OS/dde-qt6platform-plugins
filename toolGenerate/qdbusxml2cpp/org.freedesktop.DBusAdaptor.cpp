/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp ./qt5platform-plugins/misc/org.freedesktop.DBus.xml -a ./qt5platform-plugins/toolGenerate/qdbusxml2cpp/org.freedesktop.DBusAdaptor -i ./qt5platform-plugins/toolGenerate/qdbusxml2cpp/org.freedesktop.DBus.h
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "./qt5platform-plugins/toolGenerate/qdbusxml2cpp/org.freedesktop.DBusAdaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class DBusAdaptor
 */

DBusAdaptor::DBusAdaptor(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

DBusAdaptor::~DBusAdaptor()
{
    // destructor
}

void DBusAdaptor::AddMatch(const QString &in0)
{
    // handle method call org.freedesktop.DBus.AddMatch
    QMetaObject::invokeMethod(parent(), "AddMatch", Q_ARG(QString, in0));
}

QByteArray DBusAdaptor::GetAdtAuditSessionData(const QString &in0)
{
    // handle method call org.freedesktop.DBus.GetAdtAuditSessionData
    QByteArray out0;
    QMetaObject::invokeMethod(parent(), "GetAdtAuditSessionData", Q_RETURN_ARG(QByteArray, out0), Q_ARG(QString, in0));
    return out0;
}

QByteArray DBusAdaptor::GetConnectionSELinuxSecurityContext(const QString &in0)
{
    // handle method call org.freedesktop.DBus.GetConnectionSELinuxSecurityContext
    QByteArray out0;
    QMetaObject::invokeMethod(parent(), "GetConnectionSELinuxSecurityContext", Q_RETURN_ARG(QByteArray, out0), Q_ARG(QString, in0));
    return out0;
}

uint DBusAdaptor::GetConnectionUnixProcessID(const QString &in0)
{
    // handle method call org.freedesktop.DBus.GetConnectionUnixProcessID
    uint out0;
    QMetaObject::invokeMethod(parent(), "GetConnectionUnixProcessID", Q_RETURN_ARG(uint, out0), Q_ARG(QString, in0));
    return out0;
}

uint DBusAdaptor::GetConnectionUnixUser(const QString &in0)
{
    // handle method call org.freedesktop.DBus.GetConnectionUnixUser
    uint out0;
    QMetaObject::invokeMethod(parent(), "GetConnectionUnixUser", Q_RETURN_ARG(uint, out0), Q_ARG(QString, in0));
    return out0;
}

QString DBusAdaptor::GetId()
{
    // handle method call org.freedesktop.DBus.GetId
    QString out0;
    QMetaObject::invokeMethod(parent(), "GetId", Q_RETURN_ARG(QString, out0));
    return out0;
}

QString DBusAdaptor::GetNameOwner(const QString &in0)
{
    // handle method call org.freedesktop.DBus.GetNameOwner
    QString out0;
    QMetaObject::invokeMethod(parent(), "GetNameOwner", Q_RETURN_ARG(QString, out0), Q_ARG(QString, in0));
    return out0;
}

QString DBusAdaptor::Hello()
{
    // handle method call org.freedesktop.DBus.Hello
    QString out0;
    QMetaObject::invokeMethod(parent(), "Hello", Q_RETURN_ARG(QString, out0));
    return out0;
}

QStringList DBusAdaptor::ListActivatableNames()
{
    // handle method call org.freedesktop.DBus.ListActivatableNames
    QStringList out0;
    QMetaObject::invokeMethod(parent(), "ListActivatableNames", Q_RETURN_ARG(QStringList, out0));
    return out0;
}

QStringList DBusAdaptor::ListNames()
{
    // handle method call org.freedesktop.DBus.ListNames
    QStringList out0;
    QMetaObject::invokeMethod(parent(), "ListNames", Q_RETURN_ARG(QStringList, out0));
    return out0;
}

QStringList DBusAdaptor::ListQueuedOwners(const QString &in0)
{
    // handle method call org.freedesktop.DBus.ListQueuedOwners
    QStringList out0;
    QMetaObject::invokeMethod(parent(), "ListQueuedOwners", Q_RETURN_ARG(QStringList, out0), Q_ARG(QString, in0));
    return out0;
}

bool DBusAdaptor::NameHasOwner(const QString &in0)
{
    // handle method call org.freedesktop.DBus.NameHasOwner
    bool out0;
    QMetaObject::invokeMethod(parent(), "NameHasOwner", Q_RETURN_ARG(bool, out0), Q_ARG(QString, in0));
    return out0;
}

uint DBusAdaptor::ReleaseName(const QString &in0)
{
    // handle method call org.freedesktop.DBus.ReleaseName
    uint out0;
    QMetaObject::invokeMethod(parent(), "ReleaseName", Q_RETURN_ARG(uint, out0), Q_ARG(QString, in0));
    return out0;
}

void DBusAdaptor::ReloadConfig()
{
    // handle method call org.freedesktop.DBus.ReloadConfig
    QMetaObject::invokeMethod(parent(), "ReloadConfig");
}

void DBusAdaptor::RemoveMatch(const QString &in0)
{
    // handle method call org.freedesktop.DBus.RemoveMatch
    QMetaObject::invokeMethod(parent(), "RemoveMatch", Q_ARG(QString, in0));
}

uint DBusAdaptor::RequestName(const QString &in0, uint in1)
{
    // handle method call org.freedesktop.DBus.RequestName
    uint out0;
    QMetaObject::invokeMethod(parent(), "RequestName", Q_RETURN_ARG(uint, out0), Q_ARG(QString, in0), Q_ARG(uint, in1));
    return out0;
}

uint DBusAdaptor::StartServiceByName(const QString &in0, uint in1)
{
    // handle method call org.freedesktop.DBus.StartServiceByName
    uint out0;
    QMetaObject::invokeMethod(parent(), "StartServiceByName", Q_RETURN_ARG(uint, out0), Q_ARG(QString, in0), Q_ARG(uint, in1));
    return out0;
}

