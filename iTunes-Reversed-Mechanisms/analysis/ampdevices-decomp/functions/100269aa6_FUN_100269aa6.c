// name: FUN_100269aa6
// address: 100269aa6

void FUN_100269aa6(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar2 = _objc_loadWeakRetained(param_1 + 0x20);
  puVar1 = PTR_s_lastState_10088c4f8;
  lVar3 = (*(code *)PTR__objc_msgSend_10082c770)(uVar2,PTR_s_lastState_10088c4f8);
  if (lVar3 != 6) {
    uVar4 = (*(code *)PTR__objc_msgSend_10082c770)(uVar2,puVar1);
    (*(code *)PTR__objc_msgSend_10082c770)
              (uVar2,PTR_s_devicesAgentDidChangeState_withR_10088c500,uVar4,
               &PTR___NSConcreteGlobalBlock_10083f498);
  }
  (*(code *)PTR__objc_release_10082c7b0)(uVar2);
  return;
}

