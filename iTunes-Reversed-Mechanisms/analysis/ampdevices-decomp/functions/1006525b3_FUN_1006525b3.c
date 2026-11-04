// name: FUN_1006525b3
// address: 1006525b3

void FUN_1006525b3(long param_1)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  
  iVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                    (*(undefined8 *)(param_1 + 0x20),PTR_s_objectIDForBootedOSDevice__10088dc10,
                     *(undefined8 *)(param_1 + 0x28));
  lVar1 = *(long *)(param_1 + 0x30);
  if (iVar3 != 0) {
    uVar4 = FUN_1004de449(iVar3);
    cVar2 = FUN_1005c9e10(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0001006525f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,(int)cVar2,0,*(code **)(lVar1 + 0x10));
    return;
  }
  uVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                    (PTR__OBJC_CLASS___NSError_10082c660,PTR_s_errorWithOSStatus__10088d958,0x45f);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  (**(code **)(lVar1 + 0x10))(lVar1,0,uVar4);
  (*(code *)PTR__objc_release_10082c7b0)(uVar4);
  return;
}

