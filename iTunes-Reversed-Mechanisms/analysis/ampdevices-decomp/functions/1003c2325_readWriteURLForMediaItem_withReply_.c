// name: readWriteURLForMediaItem:withReply:
// address: 1003c2325

/* Function Stack Size: 0x20 bytes */

void __thiscall
AMPDevicesFrameworkConnection::readWriteURLForMediaItem_withReply_
          (AMPDevicesFrameworkConnection *this,ID param_1,SEL param_2,ID param_3,ID param_4,
          undefined4 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  ID IVar3;
  undefined local_d0 [32];
  undefined *local_b0;
  undefined8 local_a8;
  code *local_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined *local_88;
  undefined8 local_80;
  code *local_78;
  undefined *local_70;
  AMPDevicesFrameworkConnection *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  ID local_38;
  
  puVar1 = PTR__objc_retain_10082c7b8;
  uVar2 = (*(code *)PTR__objc_retain_10082c7b8)(param_2);
  local_40 = (*(code *)puVar1)(param_3);
  IVar3 = NSXPCConnection::currentConnection
                    ((ID)PTR__OBJC_CLASS___NSXPCConnection_10082c6e8,
                     PTR_s_currentConnection_10088c550);
  local_38 = _objc_retainAutoreleasedReturnValue(IVar3);
  if (local_38 != 0) {
    _objc_msgSend_stret(local_d0,local_38,PTR_s_auditToken_10088ca20);
  }
  local_88 = PTR___NSConcreteStackBlock_10082caf0;
  local_80 = 0xc2000000;
  local_78 = FUN_1003c24c4;
  local_70 = &DAT_1008571b8;
  local_68 = this;
  local_60 = (*(code *)puVar1)(uVar2);
  local_50 = local_60;
  local_58 = (*(code *)puVar1)(local_40);
  local_b0 = PTR___NSConcreteStackBlock_10082caf0;
  local_a8 = 0xc2000000;
  local_a0 = FUN_1003c25ce;
  local_98 = &DAT_10083f548;
  local_48 = uVar2;
  uVar2 = (*(code *)puVar1)(local_58);
  local_90 = uVar2;
  processRequestBlockOnMainThread_withTimeoutBlock_
            ((ID)this,PTR_s_processRequestBlockOnMainThread__10088ca10,(ID)&local_88,(int)&local_b0,
             param_4,param_5);
  puVar1 = PTR__objc_release_10082c7b0;
  (*(code *)PTR__objc_release_10082c7b0)(local_90);
  (*(code *)puVar1)(local_58);
  (*(code *)puVar1)(local_60);
  (*(code *)puVar1)(local_38);
  (*(code *)puVar1)(uVar2);
  (*(code *)puVar1)(local_50);
  return;
}

