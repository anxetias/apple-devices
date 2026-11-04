// name: FUN_10063fa88
// address: 10063fa88

int FUN_10063fa88(long param_1,int param_2,void *param_3,long param_4)

{
  ushort uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ushort uVar8;
  long *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar3 = 0;
  switch(param_2) {
  case 400:
    if (*(char *)(param_1 + 0x218) != '\x02') {
      uVar5 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      if (cVar2 != '\0') {
        local_48 = 0x8220202;
        uStack_44 = 0x7a0a90;
        uStack_40 = 1;
        local_3c = 0x822;
        local_3a = "mCurrentArtistHeader.artistInfoKind == kArtistInfoKind_Other";
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      FUN_1001782e9(0,0);
    }
    iVar3 = FUN_10056df1e(param_3,param_4,*(byte *)(param_1 + 0x9b8) ^ 1,
                          *(long *)(param_1 + 8) + 0x1cb0,param_1 + 0x1d0);
    break;
  case 0x191:
    if (*(char *)(param_1 + 0x218) != '\x02') {
      uVar5 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      if (cVar2 != '\0') {
        local_48 = 0x8220202;
        uStack_44 = 0x7a0a90;
        uStack_40 = 1;
        local_3c = 0x822;
        local_3a = "mCurrentArtistHeader.artistInfoKind == kArtistInfoKind_Other";
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      FUN_1001782e9(0,0);
    }
    iVar3 = FUN_10056df1e(param_3,param_4,*(byte *)(param_1 + 0x9b8) ^ 1,
                          *(long *)(param_1 + 8) + 0x24d0,param_1 + 0x1d4);
    break;
  case 0x192:
    FUN_10056e0bb(&local_48,param_3,param_4);
    FUN_1001a7b1c(param_1 + 0x288,&local_48);
    FUN_1001a8fac(&local_48);
    break;
  case 0x193:
    FUN_10056ddd3(&local_48,param_3,param_4,*(byte *)(param_1 + 0x9b8) ^ 1);
    FUN_1001b80b2(param_1 + 0x1f0,&local_48);
    FUN_1001b7a50(&local_48);
    break;
  default:
    if (param_2 == 0x616d4169) {
      if (param_4 == 0) {
        local_50 = (long *)0x0;
        lVar6 = *(long *)(param_1 + 0x1d8);
        if ((lVar6 != 0 && (*(byte *)(param_1 + 0x18) & 8) != 0) &&
           (lVar7 = FUN_1004cfdd1(*(undefined8 *)(param_1 + 8),lVar6), lVar7 != 0)) {
          uVar5 = FUN_1002fa216(*(undefined8 *)(param_1 + 8));
          *(undefined8 *)(param_1 + 0x1d8) = uVar5;
        }
        iVar4 = FUN_1004cf5be(param_1 + 0x1c0,&local_50);
        iVar3 = 0;
        if ((iVar4 == 0x234e) || (iVar3 = iVar4, iVar4 != 0)) break;
        FUN_1005e39b4(param_1 + 0x818,local_50[3]);
        if ((lVar6 != 0) && (lVar6 != local_50[3])) {
          FUN_1005e39b4(param_1 + 0x818,lVar6);
        }
        FUN_1001f1970(&local_48,*(undefined8 *)(param_1 + 0x240),*(undefined8 *)(param_1 + 0x248));
        FUN_1001aaadc(local_50 + 0x12,&local_48);
        FUN_1001ab006(&local_48);
        local_50[0x13] = *(long *)(param_1 + 600);
        *(undefined4 *)(local_50 + 0x14) = *(undefined4 *)(param_1 + 0x260);
        local_50[10] = *(long *)(param_1 + 0x270);
        uVar1 = *(ushort *)((long)local_50 + 0x5c);
        uVar8 = (ushort)(*(char *)(param_1 + 0x266) != '\0') << 8;
        *(ushort *)((long)local_50 + 0x5c) = uVar1 & 0xfeff | uVar8;
        if (((uVar1 & 0x20) == 0) == (*(char *)(param_1 + 0x21a) != '\0')) {
          *(ushort *)((long)local_50 + 0x5c) =
               uVar1 & 0xfedf | uVar8 | (ushort)(*(char *)(param_1 + 0x21a) != '\0') << 5;
        }
        if (*(char *)((long)local_50 + 0x5e) != *(char *)(param_1 + 0x21b)) {
          *(char *)((long)local_50 + 0x5e) = *(char *)(param_1 + 0x21b);
        }
        *(undefined4 *)((long)local_50 + 0x6c) = *(undefined4 *)(param_1 + 0x230);
        local_50[0xf] = *(long *)(param_1 + 0x250);
        FUN_1005e5f8e(local_50,*(undefined1 *)(param_1 + 0x265),*(undefined4 *)(param_1 + 0x23c));
        iVar3 = 0;
        if (*(long *)(param_1 + 0x288) == 0) break;
        (**(code **)(*local_50 + 0x78))(&local_48,local_50,1);
        lVar6 = CONCAT44(uStack_44,local_48);
        if (lVar6 != 0) {
          lVar7 = *(long *)(lVar6 + 0x18);
          if (lVar7 == 0) {
            lVar7 = FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                                  PTR__kCFTypeDictionaryValueCallBacks_10082e140);
            *(long *)(lVar6 + 0x18) = lVar7;
            if (lVar7 == 0) goto LAB_10063ff13;
          }
          FUN_100166802(lVar7,*(undefined8 *)(param_1 + 0x288));
        }
LAB_10063ff13:
        FUN_100205d70(&local_48);
        break;
      }
      if (param_4 != 0x84) {
        uVar5 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar5,0x10);
        if (cVar2 != '\0') {
          local_48 = 0x8220202;
          uStack_44 = 0x7a0a90;
          uStack_40 = 1;
          local_3c = 0x822;
          local_3a = "inObjectSize == sizeof( AMLArtistInfo )";
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
      }
      if (((*(byte *)(param_1 + 0x18) & 0x10) != 0) && (*(long *)((long)param_3 + 0x10) != 0)) {
        lVar6 = FUN_1004cfdd1(*(undefined8 *)(param_1 + 8));
        iVar3 = 0x1b59;
        if (lVar6 != 0) break;
      }
      *(undefined2 *)(param_1 + 0x1c0) = 2;
      *(undefined8 *)(param_1 + 0x1c8) = 0;
      *(undefined8 *)(param_1 + 0x1d0) = 0;
      *(undefined8 *)(param_1 + 0x1d8) = 0;
      *(undefined8 *)(param_1 + 0x1e0) = 0;
      *(undefined1 *)(param_1 + 0x1e8) = 0;
      FUN_1001b811c(param_1 + 0x1f0);
      FUN_1001a9fa6(param_1 + 0x288);
      *(ushort *)(param_1 + 0x1c0) = (ushort)*(byte *)((long)param_3 + 0x18);
      *(undefined8 *)(param_1 + 0x1c8) = *(undefined8 *)(param_1 + 8);
      *(undefined8 *)(param_1 + 0x1d8) = *(undefined8 *)((long)param_3 + 0x10);
      *(undefined8 *)(param_1 + 0x1e0) = *(undefined8 *)((long)param_3 + 0x34);
      *(undefined1 *)(param_1 + 0x1e8) = *(undefined1 *)((long)param_3 + 0x1c);
      _memcpy((void *)(param_1 + 0x200),param_3,0x84);
    }
    else {
      iVar3 = 0;
      if (param_2 != 0x616d416c) break;
      if (param_4 != 0) {
        iVar3 = 0;
        if (param_4 != 100) {
          uVar5 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar5,0x10);
          if (cVar2 != '\0') {
            local_48 = 0x8220202;
            uStack_44 = 0x7a0a90;
            uStack_40 = 1;
            local_3c = 0x822;
            local_3a = "inObjectSize == sizeof( AMLArtistListHeader )";
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
          }
          FUN_1001782e9(0,0);
          iVar3 = 0;
        }
        break;
      }
      *(undefined1 *)(param_1 + 0x899) = 1;
    }
    iVar3 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

