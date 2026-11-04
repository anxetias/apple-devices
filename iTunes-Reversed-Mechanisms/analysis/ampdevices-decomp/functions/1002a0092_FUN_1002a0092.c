// name: FUN_1002a0092
// address: 1002a0092

int FUN_1002a0092(undefined8 param_1,char param_2)

{
  ushort uVar1;
  undefined *puVar2;
  char cVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar4 = FUN_100496019();
  puVar2 = PTR__objc_release_10082c7b0;
  if (lVar4 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = 0;
    do {
      iVar6 = iVar6 + *(uint *)(lVar4 + 0xa0);
      if (param_2 != '\0') {
        uVar1 = *(ushort *)(lVar4 + 0x70);
        if (*(uint *)(lVar4 + 0xa0) < (uint)uVar1) {
          uVar5 = FUN_1001cc310();
          uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
          cVar3 = _os_log_type_enabled(uVar5,0x10);
          if (cVar3 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "imageInfo->markValue >= imageInfo->numNeedToConvertSourceFaceThumbInstances"
            ;
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          (*(code *)puVar2)(uVar5);
          FUN_1001782e9(0,0);
          uVar1 = *(ushort *)(lVar4 + 0x70);
        }
        iVar6 = iVar6 - (uint)uVar1;
      }
      lVar4 = FUN_1004960d0(lVar4);
    } while (lVar4 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar6;
}

