// name: FUN_1005d2b02
// address: 1005d2b02

undefined4 *
FUN_1005d2b02(undefined4 *param_1,int *param_2,undefined8 param_3,undefined8 *param_4,
             undefined4 param_5)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  long *plVar11;
  char cVar12;
  uint uVar13;
  undefined8 uVar14;
  undefined4 *puVar15;
  undefined4 local_a8 [8];
  long local_88;
  long *plStack_80;
  long *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined6 uStack_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_2 == (int *)0x0) || (*param_2 != 0x61727477)) {
    uVar14 = FUN_1001cc310();
    cVar12 = _os_log_type_enabled(uVar14,0x10);
    if (cVar12 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      uStack_50 = 1;
      uStack_4c = 0x822;
      uStack_4a = 0x668;
      uStack_48 = 0x1007f;
      __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    cVar12 = FUN_1005d23de(param_2,2);
    if (cVar12 != '\0') {
      FUN_1005d300f(&local_58,param_2);
      FUN_100194d94(local_a8,&local_58,param_3,param_5,0);
      puVar15 = (undefined4 *)PTR__CGRectZero_10082e360;
      local_68 = 0;
      uStack_60 = (long *)0x0;
      if (*(long *)(param_2 + 0x26) == 0) {
        iVar3 = param_2[0x12];
        if (iVar3 == 0x1d) {
          if (*(long *)(param_2 + 0x20) == 0) {
            uVar14 = FUN_1001cc310();
            cVar12 = _os_log_type_enabled(uVar14,0x10);
            if (cVar12 != '\0') {
              local_58 = 0x8220202;
              uStack_54 = 0x7a0a90;
              uStack_50 = 1;
              uStack_4c = 0x822;
              uStack_4a = 0x74a;
              uStack_48 = 0x1007f;
              __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: (%{public}s)",&local_58,0x16)
              ;
            }
            FUN_1001782e9(0,0);
          }
          else {
            FUN_1001a7790(&local_58);
LAB_1005d2db3:
            FUN_100217418(&local_68,&local_58);
            FUN_100205d70(&local_58);
LAB_1005d2e55:
            FUN_100203686(param_2 + 0x26);
            if (local_68 != 0) {
              uVar13 = param_2[2];
              if ((uVar13 & 2) != 0) {
                FUN_1001b351a(local_68,1);
                uVar13 = param_2[2];
              }
              if ((uVar13 & 4) != 0) {
                FUN_1001b351a(local_68,2);
              }
              goto LAB_1005d2ba9;
            }
          }
        }
        else if (iVar3 != 9000) {
          if (iVar3 != 0x232a) {
            FUN_1001b52da(&local_58,*(undefined8 *)(param_2 + 0x24),1);
            uVar7 = uStack_50;
            uVar6 = uStack_54;
            uVar5 = local_58;
            plVar11 = uStack_60;
            uVar4 = CONCAT22(uStack_4a,uStack_4c);
            local_58 = 0;
            uStack_54 = 0;
            uStack_50 = 0;
            uStack_4c = 0;
            uStack_4a = 0;
            local_68 = CONCAT44(uVar6,uVar5);
            uStack_60 = (long *)CONCAT44(uVar4,uVar7);
            if (plVar11 != (long *)0x0) {
              LOCK();
              plVar1 = plVar11 + 1;
              lVar2 = *plVar1;
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (lVar2 == 0) {
                local_70 = plVar11;
                (**(code **)(*plVar11 + 0x10))(plVar11);
                std::__shared_weak_count::__release_weak();
              }
            }
            plVar11 = (long *)CONCAT26(uStack_4a,CONCAT24(uStack_4c,uStack_50));
            if (plVar11 != (long *)0x0) {
              LOCK();
              plVar1 = plVar11 + 1;
              lVar2 = *plVar1;
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (lVar2 == 0) {
                local_70 = plVar11;
                (**(code **)(*plVar11 + 0x10))(plVar11);
                std::__shared_weak_count::__release_weak();
              }
            }
            goto LAB_1005d2e55;
          }
          if (*(long *)(param_2 + 0x20) != 0) {
            FUN_1001a7790(&local_58);
            goto LAB_1005d2db3;
          }
          uVar14 = FUN_1001cc310();
          cVar12 = _os_log_type_enabled(uVar14,0x10);
          if (cVar12 != '\0') {
            local_58 = 0x8220202;
            uStack_54 = 0x7a0a90;
            uStack_50 = 1;
            uStack_4c = 0x822;
            uStack_4a = 0x74a;
            uStack_48 = 0x1007f;
            __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
        }
      }
      else {
        FUN_100203686(&local_68,param_2 + 0x26);
LAB_1005d2ba9:
        FUN_10017c382(*param_4);
        FUN_10017c1c0(*param_4);
        FUN_10017c0ba(*param_4,4);
        uVar14 = *param_4;
        local_88 = local_68;
        plStack_80 = uStack_60;
        if (uStack_60 != (long *)0x0) {
          LOCK();
          uStack_60[1] = uStack_60[1] + 1;
          UNLOCK();
        }
        puVar15 = local_a8;
        FUN_10017b3e6((int)DAT_100700458,uVar14,&local_88,puVar15,0,0);
        if (plStack_80 != (long *)0x0) {
          LOCK();
          plVar11 = plStack_80 + 1;
          lVar2 = *plVar11;
          *plVar11 = *plVar11 + -1;
          UNLOCK();
          if (lVar2 == 0) {
            (**(code **)(*plStack_80 + 0x10))(plStack_80);
            std::__shared_weak_count::__release_weak();
          }
        }
        FUN_10017b174(*param_4);
        FUN_10017c38c(*param_4);
      }
      uVar4 = *puVar15;
      uVar5 = puVar15[1];
      uVar6 = puVar15[2];
      uVar7 = puVar15[3];
      uVar8 = puVar15[5];
      uVar9 = puVar15[6];
      uVar10 = puVar15[7];
      param_1[4] = puVar15[4];
      param_1[5] = uVar8;
      param_1[6] = uVar9;
      param_1[7] = uVar10;
      *param_1 = uVar4;
      param_1[1] = uVar5;
      param_1[2] = uVar6;
      param_1[3] = uVar7;
      if (uStack_60 != (long *)0x0) {
        LOCK();
        plVar11 = uStack_60 + 1;
        lVar2 = *plVar11;
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (lVar2 == 0) {
          (**(code **)(*uStack_60 + 0x10))(uStack_60);
          std::__shared_weak_count::__release_weak();
        }
      }
      goto LAB_1005d2cb6;
    }
    uVar14 = FUN_1001cc310();
    cVar12 = _os_log_type_enabled(uVar14,0x10);
    if (cVar12 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      uStack_50 = 1;
      uStack_4c = 0x822;
      uStack_4a = 0x6a6;
      uStack_48 = 0x1007f;
      __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  uVar4 = *(undefined4 *)PTR__CGRectZero_10082e360;
  uVar5 = *(undefined4 *)(PTR__CGRectZero_10082e360 + 4);
  uVar6 = *(undefined4 *)(PTR__CGRectZero_10082e360 + 8);
  uVar7 = *(undefined4 *)(PTR__CGRectZero_10082e360 + 0xc);
  uVar14 = *(undefined8 *)(PTR__CGRectZero_10082e360 + 0x18);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(PTR__CGRectZero_10082e360 + 0x10);
  *(undefined8 *)(param_1 + 6) = uVar14;
  *param_1 = uVar4;
  param_1[1] = uVar5;
  param_1[2] = uVar6;
  param_1[3] = uVar7;
LAB_1005d2cb6:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

