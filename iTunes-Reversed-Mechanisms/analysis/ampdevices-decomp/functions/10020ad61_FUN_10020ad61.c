// name: FUN_10020ad61
// address: 10020ad61

undefined1 FUN_10020ad61(undefined8 param_1,int param_2,int param_3,ushort param_4)

{
  ulong uVar1;
  char cVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 != 0x69506164) {
    if ((param_2 != 0x6950686e) && (param_2 != 0x69506f74)) {
      uVar5 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "IsAppleIOSDeviceClass(deviceClass)";
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      if ((param_2 != 0x69506f74) && (param_2 != 0x6950686e)) goto switchD_10020ae7d_caseD_1;
    }
    if ((param_4 < 0x500) &&
       (((lVar6 = FUN_100171475(param_1,&cf_RequiredDeviceCapabilities), lVar6 == 0 &&
         (lVar6 = FUN_100166844(param_1,&cf_SupportedDeviceIDs), lVar6 != 0)) &&
        (lVar7 = FUN_10017076e(lVar6), 0 < lVar7)))) {
      lVar8 = 0;
      do {
        uVar4 = FUN_100165148(lVar6,lVar8);
        switch(uVar4) {
        case 1:
          goto switchD_10020ae7d_caseD_1;
        case 2:
          if ((param_2 == 0x69506164) || (param_2 == 0x6950686e)) goto switchD_10020ae7d_caseD_1;
          break;
        case 3:
          if ((param_2 == 0x69506164) || (param_2 == 0x69506f74)) goto switchD_10020ae7d_caseD_1;
          break;
        case 4:
          if (param_3 - 0x2713U < 0x35) {
            uVar1 = 0x10000000041025 >> ((ulong)(param_3 - 0x2713U) & 0x3f);
joined_r0x00010020aecc:
            if ((uVar1 & 1) != 0) goto switchD_10020ae7d_caseD_1;
          }
          break;
        case 5:
          if (param_3 - 0x2715U < 0x33) {
            uVar1 = 0x4000000010409 >> ((ulong)(param_3 - 0x2715U) & 0x3f);
            goto joined_r0x00010020aecc;
          }
        }
        lVar8 = lVar8 + 1;
        uVar3 = 0;
      } while (lVar7 != lVar8);
      goto LAB_10020adfd;
    }
  }
switchD_10020ae7d_caseD_1:
  uVar3 = 1;
LAB_10020adfd:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

