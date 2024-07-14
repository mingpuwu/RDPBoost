// Copyright (C) 2023-2024 Stdware Collections (https://www.github.com/stdware)
// Copyright (C) 2021-2023 wangwenx190 (Yuhang Zhao)
// SPDX-License-Identifier: Apache-2.0

#ifndef QWINDOWKIT_WINDOWS_H
#define QWINDOWKIT_WINDOWS_H

#include <QtCore/qt_windows.h>
#include <QtCore/qglobal.h>

#if QT_VERSION >= QT_VERSION_CHECK(5, 14, 0)
#  include <QtCore/private/qwinregistry_p.h>
#endif

#include <QWKCore/qwkglobal.h>

#ifndef GET_X_LPARAM
#  define GET_X_LPARAM(lp) (static_cast<int>(static_cast<short>(LOWORD(lp))))
#endif

#ifndef GET_Y_LPARAM
#  define GET_Y_LPARAM(lp) (static_cast<int>(static_cast<short>(HIWORD(lp))))
#endif

#ifndef IsMinimized
#  define IsMinimized(hwnd) (::IsIconic(hwnd))
#endif

#ifndef IsMaximized
#  define IsMaximized(hwnd) (::IsZoomed(hwnd))
#endif

#ifndef RECT_WIDTH
#  define RECT_WIDTH(rect) ((rect).right - (rect).left)
#endif

#ifndef RECT_HEIGHT
#  define RECT_HEIGHT(rect) ((rect).bottom - (rect).top)
#endif

// Maybe undocumented Windows messages
#ifndef WM_UAHDESTROYWINDOW
#  define WM_UAHDESTROYWINDOW (0x0090)
#endif

#ifndef WM_UNREGISTER_WINDOW_SERVICES
#  define WM_UNREGISTER_WINDOW_SERVICES (0x0272)
#endif

#ifndef WM_NCUAHDRAWCAPTION
#  define WM_NCUAHDRAWCAPTION (0x00AE)
#endif

#ifndef WM_NCUAHDRAWFRAME
#  define WM_NCUAHDRAWFRAME (0x00AF)
#endif

namespace QWK {

    namespace Private {

        QWK_CORE_EXPORT RTL_OSVERSIONINFOW GetRealOSVersion();

        inline bool IsWindows1122H2OrGreater_Real() {
            RTL_OSVERSIONINFOW rovi = GetRealOSVersion();
            return (rovi.dwMajorVersion > 10) ||
                   (rovi.dwMajorVersion == 10 && rovi.dwMinorVersion >= 0 &&
                    rovi.dwBuildNumber >= 22621);
        }

        inline bool IsWindows11OrGreater_Real() {
            RTL_OSVERSIONINFOW rovi = GetRealOSVersion();
            return (rovi.dwMajorVersion > 10) ||
                   (rovi.dwMajorVersion == 10 && rovi.dwMinorVersion >= 0 &&
                    rovi.dwBuildNumber >= 22000);
        }

        inline bool IsWindows101903OrGreater_Real() {
            RTL_OSVERSIONINFOW rovi = GetRealOSVersion();
            return (rovi.dwMajorVersion > 10) ||
                   (rovi.dwMajorVersion == 10 && rovi.dwMinorVersion >= 0 &&
                    rovi.dwBuildNumber >= 18362);
        }

        inline bool IsWindows101809OrGreater_Real() {
            RTL_OSVERSIONINFOW rovi = GetRealOSVersion();
            return (rovi.dwMajorVersion > 10) ||
                   (rovi.dwMajorVersion == 10 && rovi.dwMinorVersion >= 0 &&
                    rovi.dwBuildNumber >= 17763);
        }

        inline bool IsWindows10OrGreater_Real() {
            RTL_OSVERSIONINFOW rovi = GetRealOSVersion();
            return (rovi.dwMajorVersion > 10) ||
                   (rovi.dwMajorVersion == 10 && rovi.dwMinorVersion >= 0);
        }

        inline bool IsWindows8Point1OrGreater_Real() {
            RTL_OSVERSIONINFOW rovi = GetRealOSVersion();
            return (rovi.dwMajorVersion > 6) ||
                   (rovi.dwMajorVersion == 6 && rovi.dwMinorVersion >= 3);
        }

        inline bool IsWindows8OrGreater_Real() {
            RTL_OSVERSIONINFOW rovi = GetRealOSVersion();
            return (rovi.dwMajorVersion > 6) ||
                   (rovi.dwMajorVersion == 6 && rovi.dwMinorVersion >= 2);
        }

        inline bool IsWindows10Only_Real() {
            return IsWindows10OrGreater_Real() && !IsWindows11OrGreater_Real();
        }

    }

    //
    // Registry Helpers
    //
    
#if QT_VERSION < QT_VERSION_CHECK(5, 14, 0)
    class QWK_CORE_EXPORT WindowsRegistryKey {
    public:
        WindowsRegistryKey(HKEY parentHandle, QStringView subKey, REGSAM permissions = KEY_READ,
                           REGSAM access = 0);

        ~WindowsRegistryKey();

        inline bool isValid() const;

        void close();
        QString stringValue(QStringView subKey) const;
        QPair<DWORD, bool> dwordValue(QStringView subKey) const;

    private:
        HKEY m_key;

        Q_DISABLE_COPY(WindowsRegistryKey)
    };

    inline bool WindowsRegistryKey::isValid() const {
        return m_key != nullptr;
    }
#else
    using WindowsRegistryKey = QWinRegistryKey;
#endif

    //
    // Version Helpers
    //

    static inline bool isWin8OrGreater() {
        static const bool result = Private::IsWindows8OrGreater_Real();
        return result;
    }

    static inline bool isWin8Point1OrGreater() {
        static const bool result = Private::IsWindows8Point1OrGreater_Real();
        return result;
    }

    static inline bool isWin10OrGreater() {
        static const bool result = Private::IsWindows10OrGreater_Real();
        return result;
    }

    static inline bool isWin101809OrGreater() {
        static const bool result = Private::IsWindows101809OrGreater_Real();
        return result;
    }

    static inline bool isWin101903OrGreater() {
        static const bool result = Private::IsWindows101903OrGreater_Real();
        return result;
    }

    static inline bool isWin11OrGreater() {
        static const bool result = Private::IsWindows11OrGreater_Real();
        return result;
    }

    static inline bool isWin1122H2OrGreater() {
        static const bool result = Private::IsWindows1122H2OrGreater_Real();
        return result;
    }

    static inline bool isWin10Only() {
        static const bool result = Private::IsWindows10Only_Real();
        return result;
    };

    //
    // Native Event Helpers
    //

    inline bool isImmersiveColorSetChange(WPARAM wParam, LPARAM lParam) {
        return !wParam && lParam &&
               std::wcscmp(reinterpret_cast<LPCWSTR>(lParam), L"ImmersiveColorSet") == 0;
    }

}

#if QT_VERSION < QT_VERSION_CHECK(6, 0, 0)
Q_DECLARE_METATYPE(QMargins)
#endif

#endif // QWINDOWKIT_WINDOWS_H
