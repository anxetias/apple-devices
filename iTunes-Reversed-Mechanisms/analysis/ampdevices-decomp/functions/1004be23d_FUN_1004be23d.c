// name: FUN_1004be23d
// address: 1004be23d

void FUN_1004be23d(undefined8 param_1,long param_2)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined2 local_11c;
  char *local_11a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(int *)(param_2 + 4) == 0x646f776e) {
    cVar2 = FUN_1001c19b0();
    if (cVar2 != '\0') {
      if (*(char *)(param_2 + 0x619) != '\0') {
        cVar2 = FUN_1004adbcd(*(undefined8 *)(param_2 + 0x150),0);
        if (cVar2 == '\0') {
          *(undefined1 *)(param_2 + 0x619) = 0;
          cVar2 = FUN_1001c19cd();
          if (cVar2 == '\0') {
            iVar1 = *(int *)(param_2 + 0x18);
            param_2 = param_2 + 0x30;
            lVar5 = 4;
            do {
              if (*(int *)(param_2 + -0x18) != 0) {
                if (*(code **)(param_2 + -8) != (code *)0x0) {
                  (**(code **)(param_2 + -8))
                            (0,0x71656d70,*(int *)(param_2 + -0x18),*(undefined4 *)(param_2 + -0x14)
                             ,param_2);
                }
                *(undefined8 *)(param_2 + -0x18) = 0;
                *(undefined4 *)(param_2 + -0x10) = 0;
              }
              param_2 = param_2 + 0x50;
              lVar5 = lVar5 + -1;
            } while (lVar5 != 0);
            if (iVar1 != 0) {
              uVar4 = FUN_1001c156e();
              if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
                FUN_1001c6987(uVar4,0x646d6763,0,0,0);
                return;
              }
              goto LAB_1004be4e2;
            }
          }
          goto LAB_1004be3de;
        }
      }
      if ((*(char *)(param_2 + 0x628) != '\0') || (*(char *)(param_2 + 0x629) != '\0')) {
        dVar7 = *(double *)(param_2 + 0x5f0);
        dVar6 = (double)FUN_1001ebd46();
        if (dVar7 < dVar6) {
          if (*(char *)(param_2 + 0x628) != '\0') {
            FUN_10015805a(&local_128);
            local_128 = 0x854ac0;
            uStack_124 = 1;
            *(undefined1 *)(param_2 + 0x628) = 0;
            if (*(char *)(param_2 + 0x629) == '\0') {
              uVar3 = FUN_1001585c2(&local_128,PTR_cf_userMaxConcurrentDownloads_100854a88);
              FUN_1004af5a7(param_2,uVar3);
            }
            FUN_10015811a(&local_128);
          }
          dVar7 = (double)FUN_1001ebd46();
          *(double *)(param_2 + 0x5f0) = dVar7 + *(double *)(param_2 + 0x5f8);
        }
      }
      dVar7 = *(double *)(param_2 + 0x5e0);
      dVar6 = (double)FUN_1001ebd46();
      if (dVar7 < dVar6) {
        FUN_1004be503(*(undefined8 *)(param_2 + 0x150));
        FUN_1004be503(*(undefined8 *)(param_2 + 0x158));
        dVar7 = (double)FUN_1001ebd46();
        *(double *)(param_2 + 0x5e0) = dVar7 + *(double *)(param_2 + 0x5e8);
      }
      if (*(char *)(param_2 + 0x5ca) != '\0') {
        FUN_1004aec71(param_2,0,0);
        *(undefined1 *)(param_2 + 0x5ca) = 0;
      }
      if (*(char *)(param_2 + 0x618) != '\0') {
        FUN_1004bdda7(param_2);
      }
    }
  }
  else {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_128 = 0x8220202;
      uStack_124 = 0x7a0a90;
      uStack_120 = 1;
      local_11c = 0x822;
      local_11a = "inDM->magic == \'down\'";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_128,0x16);
    }
    FUN_1001782e9(0,0);
  }
LAB_1004be3de:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
LAB_1004be4e2:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

