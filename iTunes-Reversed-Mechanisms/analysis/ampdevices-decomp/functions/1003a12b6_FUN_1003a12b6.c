// name: FUN_1003a12b6
// address: 1003a12b6

undefined8
FUN_1003a12b6(long param_1,undefined8 param_2,uint param_3,short *param_4,byte *param_5,
             byte *param_6)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_a0;
  short *local_98;
  uint local_8c;
  undefined **local_88;
  undefined8 *local_80;
  uint *local_78;
  short **local_70;
  undefined ***local_68;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_4 != (short *)0x0) {
    *param_4 = 0;
  }
  if (param_5 != (byte *)0x0) {
    *param_5 = 0;
  }
  if (param_6 != (byte *)0x0) {
    *param_6 = 0;
  }
  local_a0 = param_2;
  local_98 = param_4;
  local_8c = param_3;
  if ((*(byte *)(param_1 + 0xf8) & 8) == 0) {
    FUN_1003a152c(param_1);
  }
  if (param_5 != (byte *)0x0) {
    *param_5 = *(byte *)(param_1 + 0xf8) >> 4 & 1;
  }
  if (param_6 != (byte *)0x0) {
    *param_6 = *(byte *)(param_1 + 0xf8) >> 5 & 1;
  }
  uVar5 = 0;
  uVar3 = 0;
  if (param_4 == (short *)0x0) goto LAB_1003a1463;
  if ((*(int *)(param_1 + 0x10) == 2) && (*(int *)(param_1 + 0x100) != 0 && (param_3 & 1) == 0)) {
    iVar2 = FUN_1001de41f(*(long *)(param_1 + 0x48) + 0x1cb0,*(int *)(param_1 + 0x100),param_4);
    if (iVar2 != 0) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = 
        "GetStringCacheUString(&trackData->artistComposerCache, u.albumData.trackArtistStringIndex, outArtistName) == noErr"
        ;
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      uVar3 = 0;
    }
    goto LAB_1003a1463;
  }
  uVar3 = uVar5;
  if ((*(ushort *)(param_1 + 0xf8) & 0x30) == 0x10) {
    if ((param_3 & 2) == 0) goto LAB_1003a1463;
    FUN_1001c34b7(0x7f0006,param_4);
  }
  else {
    local_88 = &PTR_FUN_1008568c0;
    local_80 = &local_a0;
    local_78 = &local_8c;
    local_70 = &local_98;
    local_68 = &local_88;
    FUN_1003a0178(param_1,1,&local_88);
    if (local_68 == &local_88) {
      lVar4 = 0x20;
LAB_1003a1446:
      (**(code **)((long)*local_68 + lVar4))();
    }
    else {
      lVar4 = 0x28;
      if (local_68 != (undefined ***)0x0) goto LAB_1003a1446;
    }
    if ((*local_98 != 0) || ((local_8c & 2) == 0)) goto LAB_1003a1463;
    if ((local_8c & 0x20) == 0) {
      FUN_1001c34b7(0x7f0004);
    }
    else {
      FUN_1001c34b7(0x7f0005);
    }
  }
  uVar3 = 6;
LAB_1003a1463:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar3;
}

