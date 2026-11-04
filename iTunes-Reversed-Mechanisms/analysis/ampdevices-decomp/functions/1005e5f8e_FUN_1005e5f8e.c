// name: FUN_1005e5f8e
// address: 1005e5f8e

ulong FUN_1005e5f8e(long param_1,char param_2,uint param_3)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 unaff_RBX;
  ulong uVar9;
  bool bVar11;
  undefined8 local_478;
  undefined1 local_470 [16];
  undefined8 local_460;
  long local_458;
  long lStack_450;
  undefined4 local_448;
  undefined4 uStack_444;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  undefined4 uStack_438;
  undefined4 uStack_434;
  undefined4 uStack_430;
  undefined1 local_258 [12];
  undefined2 local_24c;
  char *local_24a;
  long *local_238;
  undefined8 local_228;
  undefined7 uStack_220;
  undefined4 uStack_219;
  undefined8 local_210;
  undefined8 uStack_208;
  long *local_200;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  undefined7 uVar10;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  bVar11 = *(char *)(param_1 + 0x88) != param_2;
  uVar10 = (undefined7)((ulong)unaff_RBX >> 8);
  uVar9 = CONCAT71(uVar10,bVar11);
  if (bVar11) {
    if (param_2 == '\0') {
      uVar8 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar8,0x10);
      if (cVar2 != '\0') {
        local_258._0_4_ = 0x8220202;
        local_258._4_8_ = "Assertion failure";
        local_24c = 0x822;
        local_24a = "inLikedState != kITLikedState_Unknown";
        __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",local_258,0x16);
      }
      FUN_1001782e9(0,0);
      uVar9 = 0;
      goto LAB_1005e6407;
    }
    *(char *)(param_1 + 0x88) = param_2;
    if ((*(byte *)(*(long *)(param_1 + 8) + 0x1bb0) & 1) != 0) {
      lVar6 = *(long *)(param_1 + 200);
      if (param_2 == '\x02') {
        for (; lVar6 != 0; lVar6 = *(long *)(lVar6 + 0x48)) {
          if ((*(uint *)(lVar6 + 0xc2) & 0x10000100) == 0x10000000) goto LAB_1005e63f5;
        }
        local_460 = *(undefined8 *)(param_1 + 0x18);
        FUN_1001b7a44(local_470);
        FUN_100313e0b(*(undefined8 *)(param_1 + 8));
        FUN_1001bb78a(&local_58,"https://music.apple.com/x-pl-artist/%llu",local_460);
        FUN_1001b80b2(local_470,&local_58);
        FUN_1001b7a50(&local_58);
        uVar8 = *(undefined8 *)(param_1 + 8);
        uVar4 = FUN_1001b83f0(local_470);
        uVar5 = FUN_1001b83ae(local_470);
        FUN_1001bb832(&local_58,local_460);
        lVar6 = FUN_10030a068(uVar8,1,uVar4,uVar5,&local_58,0x88008,1,0x48545450);
        FUN_1001b7a50(&local_58);
        if (lVar6 == 0) {
          uVar8 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar8,0x10);
          if (cVar2 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "trackInstance != nullptr";
            __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
          FUN_1002fbbfc(*(undefined8 *)(param_1 + 8));
        }
        else {
          lVar7 = FUN_10048604a(*(undefined8 *)(param_1 + 8));
          if (lVar7 != 0) {
            FUN_100489951(lVar7,lVar6,0);
          }
          lVar6 = *(long *)(lVar6 + 8);
          *(uint *)(lVar6 + 0xc2) = *(uint *)(lVar6 + 0xc2) | 0x800004;
          *(ushort *)(lVar6 + 0xc6) = *(ushort *)(lVar6 + 0xc6) | 0x22;
          FUN_1005e4722(param_1,0,local_258);
          FUN_1004711f9(lVar6,local_258,0);
          FUN_1005e565a(param_1,lVar6);
          if ((*(long *)(param_1 + 0xf8) != 0) && (*(int *)(param_1 + 0x100) != 0)) {
            FUN_1001de8ee(param_1 + 0xf8,local_258);
            FUN_1002fb779(lVar6,2,local_258,1);
          }
          FUN_1001e561b(local_460,&local_458);
          FUN_1004714e5(lVar6,&local_458,0);
          *(undefined1 *)(lVar6 + 0xcb) = 0;
          iVar3 = FUN_100274af4(*(undefined8 *)(param_1 + 8),lVar6,1,&local_478,0);
          if (iVar3 == 0) {
            iVar3 = FUN_1003a371d(lVar6,local_478);
            if ((iVar3 != -0x80) && (iVar3 != 0)) {
              uVar8 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar8,0x10);
              if (cVar2 != '\0') {
                local_58 = 0x8220202;
                local_54 = "Assertion failure";
                local_4c = 0x400;
                local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
                __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_58,0x12)
                ;
              }
            }
            if ((*(byte *)(*(long *)(param_1 + 8) + 0x1b51) & 1) == 0) {
              FUN_1003a040b(local_478);
            }
          }
          FUN_1002fbbfc(*(undefined8 *)(param_1 + 8));
        }
        FUN_1001b7a50(local_470);
      }
      else {
        for (; lVar6 != 0; lVar6 = *(long *)(lVar6 + 0x48)) {
          if ((*(uint *)(lVar6 + 0xc2) & 0x10000100) == 0x10000000) {
            *(uint *)(lVar6 + 0xc2) = *(uint *)(lVar6 + 0xc2) | 0x100;
            FUN_10031ba20(&local_458);
            local_238 = operator_new(0x38);
            *local_238 = (long)&PTR_FUN_10086fb78;
            local_238[1] = local_458;
            local_238[2] = lStack_450;
            *(undefined4 *)(local_238 + 3) = local_448;
            *(undefined4 *)((long)local_238 + 0x1c) = uStack_444;
            *(undefined4 *)(local_238 + 4) = uStack_440;
            *(undefined4 *)((long)local_238 + 0x24) = uStack_43c;
            *(undefined4 *)((long)local_238 + 0x24) = uStack_43c;
            *(undefined4 *)(local_238 + 5) = uStack_438;
            *(undefined4 *)((long)local_238 + 0x2c) = uStack_434;
            *(undefined4 *)(local_238 + 6) = uStack_430;
            local_228 = 0;
            uStack_220 = 0;
            uStack_219 = 0;
            local_210 = 0;
            uStack_208 = 0;
            local_200 = (long *)0x0;
            FUN_10017869a(local_258);
            if (local_200 != (long *)0x0) {
              LOCK();
              plVar1 = local_200 + 1;
              lVar6 = *plVar1;
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (lVar6 == 0) {
                (**(code **)(*local_200 + 0x10))(local_200);
                std::__shared_weak_count::__release_weak();
              }
            }
            if (local_238 == (long *)local_258) {
              lVar6 = 0x20;
            }
            else {
              lVar6 = 0x28;
              if (local_238 == (long *)0x0) break;
            }
            (**(code **)(*local_238 + lVar6))();
            break;
          }
        }
      }
    }
  }
LAB_1005e63f5:
  if (*(uint *)(param_1 + 0xa4) < param_3) {
    *(uint *)(param_1 + 0xa4) = param_3;
    uVar9 = CONCAT71(uVar10,1);
  }
LAB_1005e6407:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar9 & 0xffffffff;
}

