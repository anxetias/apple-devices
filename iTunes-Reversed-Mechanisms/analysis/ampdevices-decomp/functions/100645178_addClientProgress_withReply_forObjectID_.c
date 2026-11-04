// name: addClientProgress:withReply:forObjectID:
// address: 100645178

/* Function Stack Size: 0x24 bytes */

void AMPDeviceProgressMap::addClientProgress_withReply_forObjectID_
               (ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 param_5,unsigned_int param_6
               )

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__objc_retain_10082c7b8;
  uVar2 = (*(code *)PTR__objc_retain_10082c7b8)(param_3);
  uVar3 = (*(code *)puVar1)(param_4);
  uVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                    (param_1,PTR_s_progressForObjectID__10088da08,param_5);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  (*(code *)PTR__objc_msgSend_10082c770)
            (uVar4,PTR_s_addClientProgress_withReply__10088da18,uVar2,uVar3);
  puVar1 = PTR__objc_release_10082c7b0;
  (*(code *)PTR__objc_release_10082c7b0)(uVar4);
  (*(code *)puVar1)(uVar3);
  (*(code *)puVar1)(uVar2);
  return;
}

