// name: FUN_10047675c
// address: 10047675c

void FUN_10047675c(long param_1,ushort param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 == 0) || (plVar1 = *(long **)(param_1 + 0x10), plVar1 == (long *)0x0)) {
    uVar5 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar5,0x10);
    if (cVar4 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "TrackInfoIsValid(inTrackInfo)";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else if ((*(ushort *)(param_1 + 0xc6) >> 5 & 1) != (param_2 & 0xff)) {
    *(ushort *)(param_1 + 0xc6) =
         *(ushort *)(param_1 + 0xc6) & 0xffdf | (ushort)(byte)(((byte)param_2 & 1) << 5);
    for (lVar6 = *(long *)(param_1 + 0x68); lVar6 != 0; lVar6 = *(long *)(lVar6 + 0x50)) {
      FUN_1003a81b6(lVar6,0);
    }
    if ((byte)param_2 == 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1,0x73747269,param_1,0,0);
      plVar1 = *(long **)(param_1 + 0x68);
      while (plVar1 != (long *)0x0) {
        plVar3 = (long *)plVar1[10];
        FUN_1001c6987(*plVar1 + 200,0x53706c69,plVar1,0,0);
        plVar1 = plVar3;
      }
    }
    else {
      plVar3 = *(long **)(param_1 + 0x68);
      while (plVar3 != (long *)0x0) {
        plVar2 = (long *)plVar3[10];
        FUN_1001c6987(*plVar3 + 200,0x48706c69,plVar3,0,0);
        plVar3 = plVar2;
      }
      (**(code **)(*plVar1 + 0x10))(plVar1,0x68747269,param_1,0,0);
    }
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
      FUN_1002fef76(param_1);
      return;
    }
    goto LAB_100476923;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
LAB_100476923:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

