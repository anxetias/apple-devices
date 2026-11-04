// name: FUN_1003a2154
// address: 1003a2154

void FUN_1003a2154(long param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 == 0) || (lVar4 = *(long *)(param_1 + 0x28), lVar4 == 0)) {
LAB_1003a227e:
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "albumInfo != __null";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    uVar3 = FUN_1005396f9(&DAT_1008c789d,&DAT_1007565a0,0);
    cVar1 = FUN_10053941c(param_2,uVar3);
    if (cVar1 != '\0') {
      uVar3 = *(undefined8 *)(lVar4 + 0x48);
      uVar2 = FUN_1003a2088(lVar4);
      cVar1 = FUN_100276fe0(uVar3,uVar2);
      if (cVar1 != '\0') {
        *(byte *)(lVar4 + 0xf9) = *(byte *)(lVar4 + 0xf9) & 0xdf;
        FUN_10027666e(param_1);
        lVar4 = *(long *)(param_1 + 0x28);
        if (lVar4 == 0) goto LAB_1003a227e;
      }
    }
    uVar3 = FUN_1005396f9(&DAT_1008be080,&DAT_100746aec,0);
    cVar1 = FUN_10053941c(param_2,uVar3);
    if (cVar1 != '\0') {
      *(byte *)(lVar4 + 0xf8) = *(byte *)(lVar4 + 0xf8) & 0xfd;
    }
    uVar3 = FUN_1005396f9(&DAT_1008c787c,&DAT_100756570,0);
    cVar1 = FUN_10053941c(param_2,uVar3);
    if (cVar1 != '\0') {
      *(byte *)(lVar4 + 0xf9) = *(byte *)(lVar4 + 0xf9) & 0xdf;
      uVar3 = *(undefined8 *)(lVar4 + 0x48);
      uVar2 = FUN_1003a2088(lVar4);
      cVar1 = FUN_100276fe0(uVar3,uVar2);
      if (cVar1 == '\0') {
        *(byte *)(lVar4 + 0xfa) = *(byte *)(lVar4 + 0xfa) | 2;
      }
      else {
        if ((*(byte *)(lVar4 + 0xf8) & 2) == 0) {
          FUN_10055ea6a(lVar4);
        }
        if (*(long *)(lVar4 + 0x60) == param_1) {
          FUN_1003a2334(lVar4);
        }
      }
    }
    cVar1 = FUN_10053916d(param_2,0x25);
    if (cVar1 != '\0') {
      *(byte *)(lVar4 + 0xf9) = *(byte *)(lVar4 + 0xf9) & 0xbf;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

