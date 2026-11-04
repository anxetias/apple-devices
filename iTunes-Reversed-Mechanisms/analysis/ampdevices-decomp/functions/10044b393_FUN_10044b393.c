// name: FUN_10044b393
// address: 10044b393

void FUN_10044b393(long param_1,ulong param_2)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined1 local_468 [16];
  undefined4 local_458;
  char *local_454;
  undefined2 local_44c;
  char *local_44a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001b7a44(local_468);
  cVar2 = FUN_10044acc3(param_1);
  if (cVar2 == '\0') {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_44a = "TrackInfoIsRental(trackInfo)";
LAB_10044b5b5:
      local_44c = 0x822;
      local_454 = "Assertion failure";
      local_458 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
    }
  }
  else {
    if ((param_1 != 0) && (lVar1 = *(long *)(param_1 + 0x10), lVar1 != 0)) {
      if (*(int *)(lVar1 + 0x80) != 0x74646174) {
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 != '\0') {
          local_458 = 0x8220202;
          local_454 = "Assertion failure (expected to be true)";
          local_44c = 0x822;
          local_44a = "trackData->magic == \'tdat\'";
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
        }
        cVar2 = FUN_1001782e9(0,1);
        if (cVar2 == '\0') goto LAB_10044b4b5;
      }
      FUN_100476ac1(&local_458,param_1);
      FUN_1001b80b2(local_468,&local_458);
      FUN_1001b7a50(&local_458);
      if (*(long *)(param_1 + 0x10) == 0) {
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 != '\0') {
          local_458 = 0x8220202;
          local_454 = "Assertion failure";
          local_44c = 0x822;
          local_44a = "TrackInfoIsValid(trackInfo)";
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
        }
        FUN_1001782e9(0,0);
LAB_10044b572:
        if ((param_2 & 8) == 0) goto LAB_10044b577;
      }
      else {
        plVar5 = (long *)(param_1 + 0x58);
        do {
          plVar5 = (long *)*plVar5;
          if (plVar5 == (long *)0x0) goto LAB_10044b572;
        } while (*(int *)((long)plVar5 + 0x3c) != 0x46494c45);
        if (*(int *)(lVar1 + 0x84) == 0x2062696c) {
          iVar3 = FUN_1002b0559(plVar5,2);
          if (iVar3 == 0) {
            FUN_1002b1039(plVar5,&local_458);
            if ((param_2 & 8) == 0) {
              FUN_1004737f5(param_1);
            }
            else {
              FUN_1002b0cf4(plVar5);
            }
            FUN_100535102(lVar1,0,&local_458,0);
            goto LAB_10044b57f;
          }
        }
        if ((param_2 & 8) == 0) {
LAB_10044b577:
          FUN_1004737f5(param_1);
        }
        else {
          FUN_1002b0cf4(plVar5);
        }
      }
LAB_10044b57f:
      if ((param_2 & 4) != 0) {
        FUN_1002fbbfc(lVar1);
      }
      goto LAB_10044b51c;
    }
LAB_10044b4b5:
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_44a = "TrackDataIsValid( trackData )";
      goto LAB_10044b5b5;
    }
  }
  FUN_1001782e9(0,0);
LAB_10044b51c:
  FUN_1001b7a50(local_468);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

