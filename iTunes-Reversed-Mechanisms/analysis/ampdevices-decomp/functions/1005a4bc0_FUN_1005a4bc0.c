// name: FUN_1005a4bc0
// address: 1005a4bc0

undefined1 FUN_1005a4bc0(long param_1,int param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  undefined1 local_12f8 [80];
  undefined8 local_12a8;
  undefined8 local_12a0;
  undefined4 local_1298;
  char *local_1294;
  undefined2 local_128c;
  int local_128a;
  undefined1 local_1278 [512];
  undefined1 local_1078 [512];
  undefined1 local_e78 [512];
  undefined1 local_c78 [512];
  undefined1 local_a78 [512];
  undefined1 local_878 [1056];
  undefined1 local_458 [1048];
  undefined8 uStack_40;
  long local_38;
  
  uStack_40 = 0x1005a4bd8;
  lVar5 = FUN_100108310();
  lVar5 = -lVar5;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar7 = 0xc;
  if (param_2 != 2) {
    uVar7 = (uint)(param_2 == 1) * 9 - 1;
  }
  if (uVar7 == *(uint *)(param_1 + 0x15b8)) {
    uVar2 = 0;
    goto LAB_1005a4d7e;
  }
  uVar6 = ~uVar7 & *(uint *)(param_1 + 0x15b4) & *(uint *)(param_1 + 0x15b8);
  if (*(char *)(param_1 + 0x15a3) == '\0') {
    *(undefined8 *)((long)&local_38 + lVar5) = 0x1005a4cb3;
    iVar4 = FUN_1001879bd(param_1 + 0x4f0,1,&local_12a0);
    if (iVar4 == 0) {
      *(undefined8 *)((long)&local_38 + lVar5) = 0x1005a4cce;
      FUN_1001e115f(&cf_TRSS,local_a78);
      *(undefined8 *)((long)&local_38 + lVar5) = 0x1005a4ce1;
      FUN_1001e115f(&cf_TASS,local_c78);
      *(undefined8 *)((long)&local_38 + lVar5) = 0x1005a4cf4;
      FUN_1001e115f(&cf_PLSS,local_e78);
      *(undefined8 *)((long)&local_38 + lVar5) = 0x1005a4d07;
      FUN_1001e115f(&cf_OTSS,local_1078);
      *(undefined8 *)((long)&local_38 + lVar5) = 0x1005a4d1a;
      FUN_1001e115f(&cf_UISS,local_1278);
      *(undefined8 *)((long)&local_38 + lVar5) = 0x1005a4d3b;
      iVar4 = FUN_100187bea(local_12a0,local_458,local_12f8,local_878);
      if (iVar4 == 0) {
        do {
          *(undefined8 *)((long)&local_38 + lVar5) = 0x1005a4db9;
          cVar3 = FUN_10017fbfb(local_458);
          if (cVar3 != '\0') {
            if ((uVar6 & 2) == 0) {
LAB_1005a4de0:
              if ((uVar6 & 4) != 0) {
                *(undefined8 *)((long)&local_38 + lVar5) = 0x1005a4dfb;
                cVar3 = FUN_1001e6326(local_878,local_c78,0);
                if (cVar3 != '\0') goto LAB_1005a4e3d;
              }
              if ((uVar6 & 0x10) != 0) {
                *(undefined8 *)((long)&local_38 + lVar5) = 0x1005a4e1a;
                cVar3 = FUN_1001e6326(local_878,local_1078,0);
                if (cVar3 != '\0') goto LAB_1005a4e3d;
              }
              if ((uVar6 & 1) != 0) {
                *(undefined8 *)((long)&local_38 + lVar5) = 0x1005a4e39;
                cVar3 = FUN_1001e6326(local_878,local_1278,0);
                if (cVar3 != '\0') goto LAB_1005a4e3d;
              }
            }
            else {
              *(undefined8 *)((long)&local_38 + lVar5) = 0x1005a4ddc;
              cVar3 = FUN_1001e6326(local_878,local_a78,0);
              if (cVar3 == '\0') goto LAB_1005a4de0;
LAB_1005a4e3d:
              *(undefined8 *)((long)&local_38 + lVar5) = 0x1005a4e4a;
              iVar4 = FUN_100182d59(local_458,1);
              if ((iVar4 != -0x80) && (iVar4 != 0)) {
                *(undefined8 *)((long)&local_38 + lVar5) = 0x1005a4e5b;
                local_12a8 = FUN_1001cc310();
                *(undefined8 *)((long)&local_38 + lVar5) = 0x1005a4e6f;
                cVar3 = _os_log_type_enabled(local_12a8,0x10);
                if (cVar3 != '\0') {
                  local_1298 = 0x8220202;
                  local_1294 = "Assertion failure";
                  local_128c = 0x400;
                  *(undefined8 *)((long)&local_38 + lVar5) = 0x1005a4ef4;
                  local_128a = iVar4;
                  __os_log_error_impl(0x100000000,local_12a8,0x10,"%{public}s: err == (%d)",
                                      &local_1298,0x12);
                }
              }
            }
          }
          *(undefined8 *)((long)&local_38 + lVar5) = 0x1005a4e93;
          iVar4 = FUN_100187bea(local_12a0,local_458,local_12f8,local_878);
        } while (iVar4 == 0);
      }
      *(undefined8 *)((long)&local_38 + lVar5) = 0x1005a4d4b;
      FUN_100187c42(local_12a0);
    }
    if ((uVar6 & 0x16) != 0) goto LAB_1005a4d51;
  }
  else if ((uVar6 & 2) != 0) {
    *(undefined8 *)((long)&local_38 + lVar5) = 0x1005a4c52;
    iVar4 = FUN_1005a4efe(param_1,3,0,local_458);
    if (iVar4 == 0) {
      *(undefined8 *)((long)&local_38 + lVar5) = 0x1005a4c67;
      FUN_100182d59(local_458,1);
    }
    *(undefined8 *)((long)&local_38 + lVar5) = 0x1005a4c7d;
    iVar4 = FUN_1005a4efe(param_1,4,0,local_878);
    if (iVar4 == 0) {
      *(undefined8 *)((long)&local_38 + lVar5) = 0x1005a4c96;
      FUN_100182d59(local_878,1);
    }
LAB_1005a4d51:
    uVar1 = *(undefined8 *)(param_1 + 0x1668);
    *(undefined8 *)((long)&local_38 + lVar5) = 0x1005a4d64;
    FUN_100230408(uVar1);
    *(long *)(param_1 + 0x1660) = param_1 + 0x1668;
    *(undefined8 *)(param_1 + 0x1668) = 0;
    *(undefined8 *)(param_1 + 0x1670) = 0;
  }
  *(uint *)(param_1 + 0x15b8) = uVar7;
  uVar2 = 1;
LAB_1005a4d7e:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    *(code **)((long)&local_38 + lVar5) = FUN_1005a4efe;
    ___stack_chk_fail();
  }
  return uVar2;
}

