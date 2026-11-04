// name: FUN_1004394bb
// address: 1004394bb

undefined8 FUN_1004394bb(long param_1,int *param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined4 *puVar10;
  ulong uVar11;
  uint uVar12;
  long local_98;
  undefined8 local_90;
  undefined4 local_88;
  char *local_84;
  undefined2 local_7c;
  int local_7a;
  undefined4 local_68;
  char *pcStack_64;
  undefined2 uStack_5c;
  undefined2 uStack_5a;
  undefined2 uStack_58;
  undefined2 uStack_56;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_98 = 0;
  lVar5 = FUN_1004e0c3f(param_1,1);
  if ((((param_2 != (int *)0x0) && (*param_2 == 0x4f4c5354)) && (param_2[1] != 0)) &&
     (uVar12 = (int)((ulong)(*(long *)(param_2 + 4) - *(long *)(param_2 + 2)) >> 3) * -0x49249249,
     uVar12 != 0)) {
    uVar11 = 0;
    do {
      if (((*param_2 == 0x4f4c5354) && (param_2[1] != 0)) &&
         (lVar6 = *(long *)(param_2 + 2),
         uVar8 = (*(long *)(param_2 + 4) - lVar6 >> 3) * 0x6db6db6db6db6db7,
         uVar11 <= uVar8 && uVar8 - uVar11 != 0)) {
        lVar9 = uVar11 * 0x38;
        puVar10 = (undefined4 *)(lVar6 + lVar9);
        local_68 = *puVar10;
        pcStack_64 = *(char **)(puVar10 + 1);
        puVar1 = (undefined4 *)(lVar6 + 0x10 + lVar9);
        uStack_54 = puVar1[1];
        uStack_50 = puVar1[2];
        local_4c = puVar1[3];
        lVar9 = lVar6 + 0x1c + lVar9;
        uStack_48 = *(undefined4 *)(lVar9 + 4);
        uStack_44 = *(undefined4 *)(lVar9 + 8);
        uStack_40 = *(undefined4 *)(lVar9 + 0xc);
        uStack_58 = (undefined2)*puVar1;
        uStack_56 = (undefined2)((uint)*puVar1 >> 0x10);
        uStack_5c = (undefined2)puVar10[3];
        uStack_5a = (undefined2)((uint)puVar10[3] >> 0x10);
        uVar3 = FUN_100595fc8(&local_68);
        switch(uVar3) {
        case 2:
          lVar6 = FUN_1004909fc(&local_68);
          if (((lVar6 != 0) && (*(long *)(lVar6 + 8) == lVar5)) &&
             ((iVar4 = FUN_100436fb2(param_1,lVar6,0,param_3,&local_98), iVar4 != -0x80 &&
              (iVar4 != 0)))) {
            local_90 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(local_90,0x10);
            uVar7 = local_90;
joined_r0x00010043973b:
            local_90 = uVar7;
            if (cVar2 != '\0') {
              local_7c = 0x400;
              local_84 = "Assertion failure";
              local_88 = 0x8220202;
              puVar10 = &local_88;
              local_7a = iVar4;
              goto LAB_1004396cb;
            }
          }
          break;
        case 3:
        case 5:
        case 8:
          lVar6 = FUN_10031b48b(&local_68);
          if (((lVar6 != 0) && (*(long *)(lVar6 + 0x10) == lVar5)) &&
             (iVar4 = FUN_10043649f(param_1,lVar6,1,param_3,&local_98), iVar4 != 0)) {
            local_90 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(local_90,0x10);
            uVar7 = local_90;
            goto joined_r0x00010043973b;
          }
          break;
        case 6:
          lVar6 = FUN_1003a4670(&local_68);
          if ((((lVar6 != 0) && (*(long *)(lVar6 + 0x48) == lVar5)) &&
              (iVar4 = FUN_100437e90(param_1,lVar6,param_3,&local_98), iVar4 != -0x80)) &&
             (iVar4 != 0)) {
            local_90 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(local_90,0x10);
            uVar7 = local_90;
            goto joined_r0x00010043973b;
          }
          break;
        case 7:
          lVar6 = FUN_1004d0033(&local_68);
          if (((lVar6 != 0) && (*(long *)(lVar6 + 8) == lVar5)) &&
             ((iVar4 = FUN_100437b57(param_1,lVar6,param_3,&local_98), iVar4 != -0x80 &&
              (iVar4 != 0)))) {
            local_90 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(local_90,0x10);
            uVar7 = local_90;
            goto joined_r0x00010043973b;
          }
        }
      }
      else {
        uVar7 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar7,0x10);
        if (cVar2 != '\0') {
          local_68 = 0x8220202;
          pcStack_64 = "Assertion failure";
          uStack_5c = 0x400;
          uStack_5a = 0xffce;
          uStack_58 = 0xffff;
          puVar10 = &local_68;
LAB_1004396cb:
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",puVar10,0x12);
        }
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar12);
    if (local_98 != 0) {
      iVar4 = FUN_1004ef324(param_1,local_98,0);
      if ((iVar4 != -0x80) && (iVar4 != 0)) {
        uVar7 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar7,0x10);
        if (cVar2 != '\0') {
          local_68 = 0x8220202;
          pcStack_64 = "Assertion failure";
          uStack_5c = 0x400;
          uStack_5a = (undefined2)iVar4;
          uStack_58 = (undefined2)((uint)iVar4 >> 0x10);
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_68,0x12);
        }
      }
      uVar7 = FUN_1001c156e();
      FUN_1001c6987(uVar7,0x69707372,*(undefined4 *)(param_1 + 0x28),0,0);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return 0;
}

