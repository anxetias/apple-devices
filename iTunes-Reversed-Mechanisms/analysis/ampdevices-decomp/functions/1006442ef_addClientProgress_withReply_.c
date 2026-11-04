// name: addClientProgress:withReply:
// address: 1006442ef

/* Function Stack Size: 0x20 bytes */

void AMPDeviceProgress::addClientProgress_withReply_
               (ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar2 = PTR__objc_retain_10082c7b8;
  uVar3 = (*(code *)PTR__objc_retain_10082c7b8)(param_3);
  uVar4 = (*(code *)puVar2)(param_4);
  lVar5 = (*(code *)puVar2)(param_1);
  _objc_sync_enter(lVar5);
  puVar2 = PTR_s_addObject__10088c218;
  (*(code *)PTR__objc_msgSend_10082c770)
            (*(undefined8 *)(lVar5 + 0x30),PTR_s_addObject__10088c218,uVar3);
  uVar1 = *(undefined8 *)(lVar5 + 0x38);
  uVar6 = _objc_retainBlock(uVar4);
  (*(code *)PTR__objc_msgSend_10082c770)(uVar1,puVar2,uVar6);
  (*(code *)PTR__objc_release_10082c7b0)(uVar6);
  (*(code *)PTR__objc_msgSend_10082c770)(lVar5,PTR_s_exportClientProgress__10088d988,uVar3);
  _objc_sync_exit(lVar5);
  puVar2 = PTR__objc_release_10082c7b0;
  (*(code *)PTR__objc_release_10082c7b0)(lVar5);
  (*(code *)puVar2)(uVar4);
  (*(code *)puVar2)(uVar3);
  return;
}

