// 华勤科技版权所有 2008-2022
// 
// 文件名：RepeatButton.h
// 功  能：重复按钮。
// 
// 作  者：MPF开发组
// 时  间：2011-07-02
// 
// ============================================================================


#ifndef _UIREPEATBUTTON_H_
#define _UIREPEATBUTTON_H_

#include <System/Windows/AssignerTimer.h>
#include <Framework/Controls/ButtonBase.h>

namespace suic
{

class SUICORE_API RepeatButton : public ButtonBase
{
public:

    static DpProperty* DelayProperty;
    static DpProperty* IntervalProperty;

    static void StaticInit();

    RepeatButton();
    virtual ~RepeatButton();

    RTTIOfClass(RepeatButton)

    // 鼠标左键压下时的延迟时间
    int GetDelay();
    void SetDelay(int iDelay);    

    // 发送click事件的间隔事件
    int GetInterval();
    void SetInterval(int iInterval);

public:

    void OnInitialized(EventArg* e);
    void OnUnloaded(LoadedEventArg* e);

    void OnRender(Drawing * drawing);

    void OnMouseLeftButtonDown(MouseButtonEventArg* e);
    void OnMouseLeftButtonUp(MouseButtonEventArg* e);

    void OnTick(Object* sender, EventArg* e);
    virtual void OnRepeated(bool bMouseIn);

protected:

    AssignerTimer* _timer;
};

}

#endif
