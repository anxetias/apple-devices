// name: FUN_10024e6d3
// address: 10024e6d3

long FUN_10024e6d3(undefined8 param_1,int param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_3 != (int *)0x0) {
    *param_3 = 0;
  }
  lVar3 = FUN_100166b7f(param_1,&cf_MobileDeviceSoftwareVersionsByVersion);
  if (lVar3 == 0) {
LAB_10024e87a:
    lVar5 = 0;
    lVar4 = 0;
LAB_10024e87d:
    uVar7 = 0;
  }
  else {
    if (param_2 != -1) {
      if (param_2 != 0) {
        lVar6 = FUN_1001736b8(DAT_1008c4d90,0,&cf__u,param_2);
        if (lVar6 != 0) {
          lVar5 = FUN_100166b7f(lVar3,lVar6);
          if (lVar5 == 0) {
            lVar5 = 0;
          }
          else if (param_3 != (int *)0x0) {
            *param_3 = param_2;
          }
          lVar4 = 0;
          uVar7 = 0;
          goto LAB_10024e882;
        }
        uVar7 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar7,0x10);
        if (cVar1 != '\0') {
          local_4a = "supportedPayloadVersionString != nullptr";
          goto LAB_10024e904;
        }
LAB_10024e86e:
        FUN_1001782e9(0,0);
        goto LAB_10024e87a;
      }
      lVar4 = FUN_1001736b8(DAT_1008c4d90,0,&cf__u,0x11);
      if (lVar4 == 0) {
        uVar7 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar7,0x10);
        if (cVar1 != '\0') {
          local_4a = "currentSupportedPayloadVersionString != nullptr";
LAB_10024e904:
          local_4c = 0x822;
          local_54 = "Assertion failure";
          local_58 = 0x8220202;
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        goto LAB_10024e86e;
      }
      lVar5 = FUN_100166b7f(lVar3,lVar4);
      if (lVar5 != 0) {
        if (param_3 != (int *)0x0) {
          *param_3 = 0x11;
        }
        uVar7 = 0;
        lVar6 = 0;
        goto LAB_10024e882;
      }
      lVar5 = FUN_10024e933(lVar3,0x10,param_3);
      goto LAB_10024e87d;
    }
    uVar7 = FUN_10024efd7(lVar3);
    lVar5 = FUN_100166b7f(lVar3,uVar7);
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else if (param_3 != (int *)0x0) {
      iVar2 = FUN_1001740d5(uVar7);
      *param_3 = iVar2;
    }
    lVar4 = 0;
  }
  lVar6 = 0;
LAB_10024e882:
  FUN_10017060f(lVar6);
  FUN_10017060f(uVar7);
  FUN_10017060f(lVar4);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return lVar5;
}

