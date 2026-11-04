// name: FUN_10023496c
// address: 10023496c

ulong FUN_10023496c(int param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined4 local_78;
  char *local_74;
  undefined2 local_6c;
  uint local_6a;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar8 = 0;
  uVar4 = local_6a;
  if (param_1 < 0x6774696e) {
    if (0x67636f6c < param_1) {
      if (param_1 < 0x67667874) {
        if (((param_1 != 0x67636f6d) && (param_1 != 0x67646574)) && (param_1 == 0x6765696c)) {
          *(undefined **)(param_2 + 0x20) = &DAT_10083e600;
          goto LAB_100234c20;
        }
      }
      else if (param_1 < 0x676c7972) {
        if (param_1 == 0x67667874) {
          uVar8 = FUN_100466cd7("  AABDUABDUA XAAXDUAXDUABUPEBUPEBUPEOOBIoobioobi FDP FDP FDP",
                                *(undefined8 *)(param_2 + 0x18),param_2 + 0x20,param_2 + 0x24,0xf);
          return uVar8;
        }
      }
      else if ((param_1 != 0x676c7972) && (param_1 == 0x67706174)) {
        *(undefined4 *)(param_2 + 0x34) = 0;
        goto LAB_100234c20;
      }
      goto LAB_100234c1b;
    }
    if (param_1 < 0x65736d70) {
      if (param_1 == 0x63616e20) {
LAB_100234c45:
        iVar3 = *(int *)(param_2 + 0x18);
        if ((iVar3 == 0x53485244) || (iVar3 == 0x48545450)) {
          if (((iVar3 == 0x53485244) || (iVar3 == 0x48545450)) && (*(long *)(param_2 + 0x20) != 0))
          {
            if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
              uVar8 = FUN_100466bcf("  AABDUABDUA XAAXDUAXDUABUPEBUPEBUPEOOBIoobioobi FDP FDP FDP",
                                    *(long *)(param_2 + 0x20),0,0,0xf);
              return uVar8;
            }
            goto LAB_100234d68;
          }
          uVar7 = FUN_1001cc310();
          cVar5 = _os_log_type_enabled(uVar7,0x10);
          if (cVar5 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "urlLocation != nullptr";
            __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
          uVar8 = 0xffffffce;
          uVar4 = local_6a;
        }
        else {
          uVar8 = 0xfffffffc;
          if (iVar3 == 0x46494c45) {
            if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
              uVar8 = FUN_100466aac("  AABDUABDUA XAAXDUAXDUABUPEBUPEBUPEOOBIoobioobi FDP FDP FDP",
                                    **(undefined4 **)(param_2 + 0x20),
                                    (*(undefined4 **)(param_2 + 0x20))[9],0,0,
                                    *(undefined4 *)(param_2 + 0x28));
              return uVar8;
            }
            goto LAB_100234d68;
          }
        }
      }
      else if (param_1 != 0x636c7220) goto LAB_100234c1b;
    }
    else {
      if (((0x67636863 < param_1) || (param_1 == 0x65736d70)) || (param_1 != 0x67617274))
      goto LAB_100234c1b;
      uVar1 = *(undefined4 *)(param_2 + 0x18);
      uVar7 = *(undefined8 *)(param_2 + 0x20);
      uVar2 = *(undefined4 *)(param_2 + 0x28);
      FUN_1001c62d9(&local_58,0x20);
      uVar6 = FUN_1005d38c7(0,0,(undefined8 *)(param_2 + 0x30));
      if (uVar6 == 0) {
        local_58 = 0x61727477;
        local_40 = *(undefined8 *)(param_2 + 0x30);
        uVar6 = FUN_100234e77(uVar1,uVar7,uVar2,0,0,0,&local_58);
        uVar8 = (ulong)uVar6;
        uVar4 = local_6a;
        if ((uVar6 == 0xffffff80) || (uVar6 == 0)) goto LAB_100234c20;
        uVar7 = FUN_1001cc310();
        cVar5 = _os_log_type_enabled(uVar7,0x10);
        uVar4 = local_6a;
      }
      else {
        uVar8 = (ulong)uVar6;
        uVar7 = FUN_1001cc310();
        cVar5 = _os_log_type_enabled(uVar7,0x10);
        uVar4 = local_6a;
      }
      local_6a = uVar6;
      if (cVar5 != '\0') {
        local_6c = 0x400;
        local_74 = "Assertion failure";
        local_78 = 0x8220202;
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_78,0x12);
        uVar4 = local_6a;
      }
    }
  }
  else {
    if (param_1 < 0x73617274) {
      if (param_1 < 0x7063616e) {
        if (param_1 == 0x6774696e) {
          uVar8 = FUN_100234e77(*(undefined4 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x20),
                                *(undefined4 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x38),
                                *(undefined8 *)(param_2 + 0x40),*(undefined8 *)(param_2 + 0x50),0);
          if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
            return uVar8;
          }
          goto LAB_100234d68;
        }
        if ((param_1 != 0x67756669) && (param_1 == 0x696e6974)) goto LAB_100234c20;
      }
      else if ((param_1 < 0x72636f6d) && (param_1 == 0x7063616e)) goto LAB_100234c45;
    }
    else if ((((param_1 < 0x736c7972) && (param_1 != 0x73617274)) && (param_1 != 0x73636f6d)) &&
            (param_1 == 0x73657874)) {
      uVar8 = FUN_100466d97("  AABDUABDUA XAAXDUAXDUABUPEBUPEBUPEOOBIoobioobi FDP FDP FDP",
                            *(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x20));
      return uVar8;
    }
LAB_100234c1b:
    uVar8 = 0xfffffffc;
  }
LAB_100234c20:
  local_6a = uVar4;
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar8;
  }
LAB_100234d68:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

