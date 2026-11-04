// name: FUN_1005421e8
// address: 1005421e8

undefined8
FUN_1005421e8(undefined8 param_1,double param_2,long *param_3,uint param_4,uint *param_5,
             long param_6,char param_7)

{
  long lVar1;
  char cVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  short *psVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  double dVar10;
  undefined1 local_a0 [16];
  long local_90;
  uint *local_88;
  long local_80;
  undefined4 local_78;
  char *local_74;
  undefined2 local_6c;
  char *local_6a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar5 = *param_5;
  uVar6 = (ulong)uVar5;
  if (uVar5 < param_4) {
    local_88 = param_5;
    if (param_3[0x1fc] == 0) {
      uVar9 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar9,0x10);
      if (cVar2 != '\0') {
        local_78 = 0x8220202;
        local_74 = "Assertion failure";
        local_6c = 0x822;
        local_6a = "mCoreMediaItem != __null";
        __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_78,0x16);
      }
      FUN_1001782e9(0,0);
      param_5 = local_88;
    }
    else {
      local_80 = param_6;
      if (param_7 == '\0') {
        FUN_1001b7a44(local_a0);
        FUN_10044116e(&local_78,param_3[0x1fc]);
        FUN_1001b80b2(local_a0,&local_78);
        lVar1 = local_80;
        FUN_1001b7a50(&local_78);
        psVar7 = (short *)(lVar1 + uVar6 * 0x404 + 0x204);
        FUN_1001bb41a(local_a0,psVar7);
        if (*psVar7 != 0) {
          puVar8 = (undefined4 *)(uVar6 * 0x404 + local_80);
          FUN_1001c34b7(0x138a0005,puVar8 + 1);
          *puVar8 = 0x636f7079;
          uVar5 = uVar5 + 1;
          uVar6 = (ulong)uVar5;
          if (param_4 <= uVar5) {
            uVar9 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar9,0x10);
            if (cVar2 != '\0') {
              local_78 = 0x8220202;
              local_74 = "Assertion failure";
              local_6c = 0x822;
              local_6a = "numDetails < inMaxDetails";
              __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_78,0x16);
            }
            FUN_1001782e9(0,0);
            FUN_1001b7a50(local_a0);
            param_5 = local_88;
            goto LAB_1005424cd;
          }
        }
        FUN_1001b7a50(local_a0);
      }
      dVar10 = (double)(**(code **)(*param_3 + 0x20))(param_3);
      if (((int)dVar10 != 0) && ((int)param_2 != 0)) {
        local_90 = local_80 + uVar6 * 0x404 + 0x204;
        FUN_1001e1b6d((long)(int)dVar10);
        local_78 = 0xd70001;
        FUN_1001e1890(&local_78,local_90);
        FUN_1001e1b6d((long)(int)param_2,&local_78);
        FUN_1001e1890(&local_78,local_90);
        puVar8 = (undefined4 *)(uVar6 * 0x404 + local_80);
        FUN_1001c34b7(0x138a0021,puVar8 + 1);
        *puVar8 = 0x7664696d;
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulong)uVar5;
        param_5 = local_88;
        if (param_4 <= uVar5) goto LAB_1005424cd;
      }
      uVar4 = FUN_100444724(param_3[0x1fc]);
      if (uVar4 != 0) {
        FUN_10053734e(&local_78,uVar4 & 0xffffffff,0);
        lVar1 = local_80;
        FUN_1001bb41a(&local_78,uVar6 * 0x404 + local_80 + 0x204);
        puVar8 = (undefined4 *)(uVar6 * 0x404 + lVar1);
        FUN_1001b7a50(&local_78);
        FUN_1001c34b7(0x138a000a,puVar8 + 1);
        *puVar8 = 0x74627220;
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulong)uVar5;
        param_5 = local_88;
        if (param_4 <= uVar5) goto LAB_1005424cd;
      }
      uVar5 = (uint)uVar6;
      iVar3 = FUN_1004414fc(param_3[0x1fc]);
      if (iVar3 == 0x6d703476) {
        uVar9 = 0x138a0020;
      }
      else if (iVar3 == 0x68766331) {
        uVar9 = 0x138a001e;
      }
      else {
        param_5 = local_88;
        if (iVar3 != 0x61766331) goto LAB_1005424cd;
        uVar9 = 0x138a001f;
      }
      FUN_1001c34b7(0x138a001d,local_80 + uVar6 * 0x404 + 4);
      puVar8 = (undefined4 *)(local_80 + uVar6 * 0x404);
      FUN_1001c34b7(uVar9,puVar8 + 0x81);
      *puVar8 = 0x76636f64;
      uVar5 = uVar5 + 1;
      param_5 = local_88;
    }
  }
LAB_1005424cd:
  *param_5 = uVar5;
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return 0;
}

