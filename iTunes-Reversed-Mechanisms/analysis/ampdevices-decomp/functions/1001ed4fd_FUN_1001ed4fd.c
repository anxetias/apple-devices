// name: FUN_1001ed4fd
// address: 1001ed4fd

ulong FUN_1001ed4fd(long param_1,code *UNRECOVERED_JUMPTABLE,undefined8 param_3,char param_4)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined1 local_58 [8];
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  if (param_1 == 0) {
    return 0xffffffce;
  }
  if ((param_4 != '\0') &&
     (lVar1 = *(long *)(param_1 + 0x18), lVar4 = FUN_1001edfdf(), lVar1 == lVar4)) {
                    /* WARNING: Could not recover jumptable at 0x0001001ed644. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (*UNRECOVERED_JUMPTABLE)(param_3);
    return uVar6;
  }
  puVar5 = (undefined8 *)FUN_1001c6429(0x20);
  if (puVar5 == (undefined8 *)0x0) {
    uVar7 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar7,0x10);
    if (cVar2 != '\0') {
      FUN_1006c4e2f(uVar7);
    }
    FUN_1001782e9(0,0);
    return 0xffffff94;
  }
  *puVar5 = UNRECOVERED_JUMPTABLE;
  puVar5[1] = param_3;
  if (param_4 != '\0') {
    uVar3 = FUN_1001e8dd6(&local_50,0,0);
    uVar6 = (ulong)uVar3;
    if (uVar3 == 0xffffff80) goto LAB_1001ed685;
    if (uVar3 != 0) {
      uVar7 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar7,0x10);
      if (cVar2 != '\0') {
        FUN_1006c4dc3(uVar6,uVar7);
      }
      goto LAB_1001ed685;
    }
    puVar5[2] = &local_50;
  }
  uVar3 = FUN_1001ee941(0,0,0,*(undefined8 *)(param_1 + 0x10),FUN_1001ed6b9,puVar5,local_58);
  if (uVar3 == 0xffffff80) {
    return 0xffffff80;
  }
  if (uVar3 != 0) {
    uVar7 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar7,0x10);
    if (cVar2 == '\0') {
      return (ulong)uVar3;
    }
    FUN_1006c4d57(uVar3,uVar7);
    return (ulong)uVar3;
  }
  if (param_4 == '\0') {
    return 0;
  }
  FUN_1001e944c(&local_50);
  FUN_1001e9587(&local_50);
  uVar6 = (ulong)*(uint *)(puVar5 + 3);
LAB_1001ed685:
  FUN_1001c64c1(puVar5);
  return uVar6;
}

