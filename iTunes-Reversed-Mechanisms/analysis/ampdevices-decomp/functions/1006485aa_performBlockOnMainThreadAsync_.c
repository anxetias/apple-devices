// name: performBlockOnMainThreadAsync:
// address: 1006485aa

/* Function Stack Size: 0x18 bytes */

void AMPDevicesClientConnection::performBlockOnMainThreadAsync_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_s_performBlock__10088dac8;
  uVar2 = _objc_retainBlock(param_3);
  (*(code *)PTR__objc_msgSend_10082c770)
            (param_1,PTR_s_performSelectorOnMainThread_with_10088dad0,puVar1,uVar2,0);
  (*(code *)PTR__objc_release_10082c7b0)(uVar2);
  return;
}

