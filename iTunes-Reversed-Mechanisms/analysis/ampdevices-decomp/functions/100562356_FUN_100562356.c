// name: FUN_100562356
// address: 100562356

int FUN_100562356(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined4 local_10a8;
  char *local_10a4;
  undefined2 local_109c;
  int local_109a;
  undefined1 local_1088 [512];
  undefined4 local_e88;
  char *local_e84;
  undefined2 local_e7c;
  int local_e7a;
  undefined1 local_a68 [512];
  undefined1 local_868 [1056];
  undefined4 local_448;
  char *local_444;
  undefined2 local_43c;
  char *local_43a;
  undefined8 uStack_30;
  long local_28;
  
  uStack_30 = 0x10056236a;
  auVar5 = FUN_100108310();
  lVar1 = -auVar5._0_8_;
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = 0;
  }
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = 0;
  }
  if ((auVar5._8_4_ >> 10 & 1) == 0) {
    *(undefined8 *)((long)&local_28 + lVar1) = 0x1005623a5;
    uVar4 = FUN_1001cc310();
    *(undefined8 *)((long)&local_28 + lVar1) = 0x1005623b5;
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_448 = 0x8220202;
      local_444 = "Assertion failure";
      local_43c = 0x822;
      local_43a = "PhotoImportOptions::ExactlyOnePhotoApplicationSpecified(importOptions)";
      *(undefined8 *)((long)&local_28 + lVar1) = 0x1005625a4;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_448,0x16);
    }
    *(undefined8 *)((long)&local_28 + lVar1) = 0x1005623c6;
    FUN_1001782e9(0,0);
    iVar3 = -0x32;
  }
  else {
    *(undefined8 *)((long)&local_28 + lVar1) = 0x1005623e1;
    iVar3 = FUN_100561d9d(auVar5._8_8_ & 0xffffffff,param_4,&local_448);
    if (iVar3 == 0) {
      *(undefined8 *)((long)&local_28 + lVar1) = 0x10056242d;
      FUN_1001e04f5("iPod Photo Cache",local_1088);
      *(undefined8 *)((long)&local_28 + lVar1) = 0x100562443;
      iVar3 = FUN_10058fa81(local_1088,&local_448,local_868);
      if (iVar3 != -0x80) {
        if (iVar3 == 0) {
          *(undefined8 *)((long)&local_28 + lVar1) = 0x100562468;
          FUN_1001e04f5("Photo Database",local_a68);
          *(undefined8 *)((long)&local_28 + lVar1) = 0x100562480;
          iVar3 = FUN_10017ecc9(local_868,local_a68,&local_e88,0);
          if (iVar3 == 0) {
            *(undefined8 *)((long)&local_28 + lVar1) = 0x10056249a;
            iVar3 = FUN_10038f413(&local_e88,param_1,param_2);
            if ((iVar3 != -0x80) && (iVar3 != 0)) {
              *(undefined8 *)((long)&local_28 + lVar1) = 0x1005624b2;
              uVar4 = FUN_1001cc310();
              *(undefined8 *)((long)&local_28 + lVar1) = 0x1005624c2;
              cVar2 = _os_log_type_enabled(uVar4,0x10);
              if (cVar2 != '\0') {
                local_10a8 = 0x8220202;
                local_10a4 = "Assertion failure";
                local_109c = 0x400;
                *(undefined8 *)((long)&local_28 + lVar1) = 0x1005625ee;
                local_109a = iVar3;
                __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_10a8,
                                    0x12);
              }
              if ((iVar3 == -0x27) || (iVar3 == -0xd0)) {
                *(undefined8 *)((long)&local_28 + lVar1) = 0x1005624ec;
                FUN_100182d59(local_868,3);
              }
            }
          }
        }
        else {
          *(undefined8 *)((long)&local_28 + lVar1) = 0x1005624f6;
          uVar4 = FUN_1001cc310();
          *(undefined8 *)((long)&local_28 + lVar1) = 0x100562506;
          cVar2 = _os_log_type_enabled(uVar4,0x10);
          if (cVar2 != '\0') {
            local_e88 = 0x8220202;
            local_e84 = "Assertion failure";
            local_e7c = 0x400;
            *(undefined8 *)((long)&local_28 + lVar1) = 0x100562553;
            local_e7a = iVar3;
            __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_e88,0x12);
          }
        }
      }
    }
    *(undefined8 *)((long)&local_28 + lVar1) = 0x1005623f3;
    FUN_10058faf7(local_868);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)((long)&local_28 + lVar1) = &UNK_1005625f8;
    ___stack_chk_fail();
  }
  return iVar3;
}

