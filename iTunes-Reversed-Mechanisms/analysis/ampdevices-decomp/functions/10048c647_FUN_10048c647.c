// name: FUN_10048c647
// address: 10048c647

undefined8 * FUN_10048c647(long param_1)

{
  int iVar1;
  char cVar2;
  ushort uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 == 0) || (*(long *)(param_1 + 0x10) == 0)) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "TrackInfoIsValid(trackInfo)";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    puVar5 = (undefined8 *)0x0;
    FUN_1001782e9(0,0);
LAB_10048c6fd:
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
      return puVar5;
    }
  }
  else {
    iVar1 = *(int *)(*(long *)(param_1 + 0x10) + 0x84);
    if (((iVar1 == 0x2062696c) || (iVar1 == 0x72767273)) || (iVar1 == 0x646f5069)) {
      for (puVar5 = *(undefined8 **)(param_1 + 0x68); puVar5 != (undefined8 *)0x0;
          puVar5 = (undefined8 *)puVar5[10]) {
        uVar3 = FUN_10048c0ca(*puVar5);
        if (((uVar3 - 1 < 0x40) && ((0x8800c0000000067fU >> ((ulong)(uVar3 - 1) & 0x3f) & 1) != 0))
           && (cVar2 = FUN_100485f88(*puVar5), cVar2 == '\0')) {
          cVar2 = FUN_100485f88(*puVar5);
          if (cVar2 == '\0') goto LAB_10048c6fd;
          break;
        }
      }
    }
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
      puVar5 = (undefined8 *)FUN_10048a4b3(param_1);
      return puVar5;
    }
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

