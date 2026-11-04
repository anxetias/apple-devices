// name: FUN_1004bd472
// address: 1004bd472

undefined8
FUN_1004bd472(undefined8 param_1,char *param_2,undefined8 param_3,int param_4,long *param_5)

{
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  bool bVar8;
  undefined1 local_ae8 [80];
  undefined1 local_a98 [1056];
  short local_678 [256];
  undefined1 local_478 [1056];
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (((param_4 != 2) || (*param_2 != '\0')) ||
     (cVar1 = FUN_1001e4e7c("Info.plist",param_3,1), cVar1 == '\0')) {
    uVar6 = 0;
    FUN_10017060f(0);
    goto LAB_1004bd4a7;
  }
  lVar5 = FUN_10016aa24(DAT_1008c4d90,param_1,0,0);
  if (lVar5 == 0) {
    uVar6 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar6,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "dictionary != nullptr";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    iVar4 = FUN_10017d5ba(param_1,local_478);
    if (iVar4 != -0x80) {
      if (iVar4 == 0) {
        bVar8 = false;
        cVar1 = FUN_100167dd2(lVar5,&cf_is_container,0);
        lVar7 = *param_5;
        cVar2 = FUN_1004aa626(lVar7);
        if (cVar2 != '\0') {
          bVar8 = *(char *)(lVar7 + 0x778) != '\0';
        }
        if (((bool)cVar1 == bVar8) &&
           (((cVar1 != '\0' ||
             ((FUN_100166ce2(lVar5,&cf_download_file_name,local_678), local_678[0] != 0 &&
              (iVar4 = FUN_10017ecc9(local_478,local_678,local_a98,local_ae8), iVar4 == 0)))) &&
            (cVar1 = FUN_1004bd7a5(*param_5,lVar5), cVar1 != '\0')))) {
          lVar7 = *param_5;
          if (*(code **)(lVar7 + 0x88) != (code *)0x0) {
            iVar4 = (**(code **)(lVar7 + 0x88))(lVar7,0x72666d64,lVar5,local_478,lVar7 + 0x90);
            if (iVar4 != 1) goto LAB_1004bd642;
            lVar7 = *param_5;
          }
          cVar1 = FUN_1004aa626(lVar7);
          if ((cVar1 == '\0') || (*(char *)(lVar7 + 0x778) == '\0')) {
            iVar4 = FUN_1004bcb5b(*param_5 + 0x1bc0,lVar5,local_478);
            uVar3 = FUN_100167dd2(lVar5,&cf_dpm,0);
            *(undefined1 *)(*param_5 + 0x1ce) = uVar3;
            if (iVar4 != 1) goto LAB_1004bd642;
          }
          else {
            uVar3 = FUN_100167dd2(lVar5,&cf_dpm,0);
            *(undefined1 *)(*param_5 + 0x1ce) = uVar3;
          }
          *(undefined1 *)(param_5 + 1) = 1;
          param_5[2] = lVar5;
          _memcpy(param_5 + 3,local_478,0x420);
          FUN_10017060f(0);
          uVar6 = 0xffffff80;
          goto LAB_1004bd4a7;
        }
      }
      else {
        uVar6 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar6,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x400;
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
      }
    }
  }
LAB_1004bd642:
  FUN_10017060f(lVar5);
  uVar6 = 0;
LAB_1004bd4a7:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar6;
}

