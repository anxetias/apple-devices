// name: FUN_10048055e
// address: 10048055e

undefined4 FUN_10048055e(long param_1,long param_2,char param_3)

{
  long *plVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  long lVar6;
  uint uVar7;
  long *plVar8;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 == 0) || (*(long *)(param_1 + 0x10) == 0)) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_4a = "TrackInfoIsValid(trackInfo)";
LAB_100480841:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  else if ((param_2 == 0) || (*(long *)(param_2 + 0x10) == 0)) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_4a = "TrackInfoIsValid(destTrackInfo)";
      goto LAB_100480841;
    }
  }
  else {
    if (*(long *)(param_1 + 0x10) == *(long *)(param_2 + 0x10)) {
      puVar5 = (undefined4 *)FUN_1003ae1f8();
      if (puVar5 == (undefined4 *)0x0) {
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "combinedITTrackInfo != __null";
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
        uVar3 = 0xffffff94;
      }
      else {
        *puVar5 = 0x7000000;
        *(undefined8 *)(puVar5 + 0x598) = 0x30000000000;
        *(undefined8 *)(puVar5 + 0x59a) = 0;
        uVar7 = *(uint *)(param_2 + 0x144);
        if (*(uint *)(param_2 + 0x144) < *(uint *)(param_1 + 0x144)) {
          uVar7 = *(uint *)(param_1 + 0x144);
        }
        puVar5[0x492] = uVar7;
        uVar7 = *(uint *)(param_2 + 0x14c);
        if (*(uint *)(param_2 + 0x14c) < *(uint *)(param_1 + 0x14c)) {
          uVar7 = *(uint *)(param_1 + 0x14c);
        }
        puVar5[0x493] = uVar7;
        lVar6 = param_2;
        if (*(char *)(param_2 + 300) < *(char *)(param_1 + 300)) {
          lVar6 = param_1;
        }
        *(short *)((long)puVar5 + 0x1242) = (short)*(char *)(lVar6 + 300);
        uVar7 = *(uint *)(param_2 + 0x150);
        if (*(uint *)(param_2 + 0x150) < *(uint *)(param_1 + 0x150)) {
          uVar7 = *(uint *)(param_1 + 0x150);
        }
        puVar5[0xd8f] = uVar7;
        uVar7 = *(uint *)(param_2 + 0x158);
        if (*(uint *)(param_2 + 0x158) < *(uint *)(param_1 + 0x158)) {
          uVar7 = *(uint *)(param_1 + 0x158);
        }
        puVar5[0xd90] = uVar7;
        uVar7 = *(uint *)(param_1 + 0xc2);
        plVar8 = *(long **)(param_1 + 0x58);
        if (*(char *)(param_1 + 0x90) < '\0') {
          *(byte *)(param_2 + 0x90) = *(byte *)(param_2 + 0x90) | 0x80;
        }
        do {
          plVar1 = (long *)*plVar8;
          FUN_1004808be(plVar8,param_2);
          if (plVar1 == (long *)0x0) break;
          plVar8 = plVar1;
        } while (param_3 != '\0');
        uVar3 = FUN_100312870(param_2,puVar5,puVar5 + 0x598,0,1,0,0,0);
        FUN_100470fd6(param_2);
        if ((uVar7 >> 0x1d & 1) != 0) {
          FUN_10047fa76(param_2,1,0,0,0);
        }
        FUN_1003ae783(puVar5 + 0x132a);
        FUN_1001c64c1(puVar5);
      }
      goto LAB_100480664;
    }
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_4a = 
      "(((trackInfo) != nullptr) ? ((trackInfo)->trackDataPrivate) : nullptr) == (((destTrackInfo) != nullptr) ? ((destTrackInfo)->trackDataPrivate) : nullptr)"
      ;
      goto LAB_100480841;
    }
  }
  FUN_1001782e9(0,0);
  uVar3 = 0xffffffce;
LAB_100480664:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

