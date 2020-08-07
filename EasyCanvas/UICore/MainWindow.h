#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QMainWindow>
#include "UICanvas/UICanvasView.h"
#include "UIAttributWidget.h"
#include "UINodeTree/UINodeTreeView.h"

class QToolBar;
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    UICanvasView* m_pCanvasView = nullptr;
    // 属性界面
    UIAttributeWidget* m_pAttributeWidget = nullptr;
    // 节点树
    UINodeTreeView* m_pNodeTreeWidget = nullptr;

    QToolBar* m_pToolBar = nullptr;

    void initToolBar(void);
    void initMenuBar(void);

private slots:
    void onClickedImageButton(void);
    void onClickedArrowButton(void);
    void onClickedFreeDrawButton(void);

    void onClickedRectButton(void);
    void onClickedEllipseButton(void);
    void onClickedAudioButton(void);
    void onClickedTextButton(void);

    void onSelectedItemChanged(void);

    // 保存
    void onClickedSaveAs(void);
    // 关于我
    void onClickedAboutMe(void);

    // 编辑菜单
    // 脚本编辑器
    void onClickedScriptEdit(void);
};

#endif // WIDGET_H
