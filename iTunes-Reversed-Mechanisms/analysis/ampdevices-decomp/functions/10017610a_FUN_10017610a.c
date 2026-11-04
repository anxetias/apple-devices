// name: FUN_10017610a
// address: 10017610a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_10017610a(int *param_1,int param_2,undefined8 param_3,undefined4 param_4,uint param_5,
                   ulong *param_6)

{
  long *plVar1;
  ushort *puVar2;
  ulong *puVar3;
  char cVar4;
  uint uVar5;
  ulong uVar6;
  short *psVar7;
  void *pvVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  int iVar12;
  int iVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined4 local_5c;
  undefined8 local_58;
  long *local_50;
  uint local_48 [2];
  long *local_40;
  ulong *local_38;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x63687064)) {
    uVar11 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar11,0x10);
    if (cVar4 != '\0') {
      FUN_1006826ce(uVar11);
    }
LAB_1001761b6:
    FUN_1001782e9(0,0);
    uVar6 = 0xffffffce;
  }
  else {
    iVar13 = param_2 + (uint)(param_2 == 0);
    if (param_2 == -1) {
      return 0xffffffce;
    }
    iVar12 = (int)param_3;
    if (iVar12 < 0x70746368) {
      if (0x70636663 < iVar12) {
        if (iVar12 == 0x70636664) {
          uVar6 = FUN_100176993(param_1,iVar13,param_4,param_6,0);
          return uVar6;
        }
        if (iVar12 == 0x706c6f63) {
          uVar5 = FUN_100176c87(param_1,iVar13,0x706c6f63,param_5,param_6);
          if (uVar5 != 0) {
            return (ulong)uVar5;
          }
          uVar6 = *param_6;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = uVar6;
          auVar14 = pshufb(auVar14,_DAT_10070e4b0);
          *param_6 = auVar14._0_8_;
          if ((int)uVar6 != 0x6b617274) {
            return 0;
          }
          auVar15._8_8_ = 0;
          auVar15._0_8_ = param_6[1];
          auVar14 = pshufb(auVar15,_DAT_10070e4b0);
          param_6[1] = auVar14._0_8_;
          return 0;
        }
LAB_10017658e:
        uVar6 = FUN_100176c87(param_1,iVar13,param_3,param_5,param_6);
        return uVar6;
      }
      if (iVar12 != 0x696d6167) {
        if (iVar12 == 0x6e616d65) {
          uVar6 = FUN_1001767b3(param_1,iVar13,param_4,param_5,param_6);
          return uVar6;
        }
        goto LAB_10017658e;
      }
      local_58 = 0;
      local_5c = 0;
      if (param_6 == (ulong *)0x0) {
        uVar11 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar11,0x10);
        if (cVar4 != '\0') {
          FUN_100682658(uVar11);
        }
        goto LAB_1001761b6;
      }
      uVar5 = FUN_100176993(param_1,iVar13,param_4,&local_58,&local_5c);
      uVar6 = (ulong)uVar5;
      if (uVar5 == 0xffffff80) {
        return 0xffffff80;
      }
      if (uVar5 != 0) {
        uVar11 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar11,0x10);
        if (cVar4 == '\0') {
          return uVar6;
        }
        FUN_1006825ec(uVar6,uVar11);
        return uVar6;
      }
      FUN_1001b52da(local_48,local_58,1);
      FUN_100217418(param_6,local_48);
      if (local_40 != (long *)0x0) {
        LOCK();
        plVar1 = local_40 + 1;
        lVar9 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar9 == 0) {
          (**(code **)(*local_40 + 0x10))(local_40);
          std::__shared_weak_count::__release_weak();
        }
      }
      FUN_10017060f(local_58);
    }
    else {
      local_38 = param_6;
      if (0x75726c1f < iVar12) {
        if (iVar12 == 0x75726c20) {
          if ((*(byte *)(param_1 + 3) & 4) == 0) {
            return 0xffffffce;
          }
          lVar9 = *(long *)(param_1 + 0xe);
          if (lVar9 == 0) {
            local_50 = (long *)(param_1 + 0xe);
            uVar5 = FUN_100177051(*(undefined8 *)(param_1 + 6),0x75726c20);
            if (uVar5 != 0) {
              uVar6 = (ulong)uVar5;
              uVar11 = FUN_1001cc310();
              cVar4 = _os_log_type_enabled(uVar11,0x10);
              if (cVar4 == '\0') {
                return uVar6;
              }
              FUN_100682494(uVar6,uVar11);
              return uVar6;
            }
            lVar9 = *local_50;
          }
          psVar7 = (short *)FUN_1001773b9(lVar9,iVar13,param_4,0);
          if (psVar7 == (short *)0x0) {
            return 0xffffffce;
          }
          iVar13 = FUN_10015bb96(*(undefined8 *)(param_1 + 6),0,0x63686170,(int)*psVar7,0);
          if (iVar13 == 0) {
            uVar11 = FUN_1001cc310();
            cVar4 = _os_log_type_enabled(uVar11,0x10);
            if (cVar4 != '\0') {
              FUN_100682576(uVar11);
            }
          }
          else {
            pvVar8 = (void *)FUN_10015c089(*(undefined8 *)(param_1 + 6),iVar13,0x75726c20,1,local_48
                                          );
            puVar3 = local_38;
            if (pvVar8 != (void *)0x0) {
              if (param_5 < local_48[0]) {
                local_48[0] = param_5;
              }
              _memcpy(local_38,pvVar8,(ulong)local_48[0]);
              cVar4 = FUN_1001df957(puVar3,"http://itunes.com/none",1);
              if ((cVar4 != '\0') || (cVar4 = FUN_1001df957(puVar3," ",1), cVar4 != '\0')) {
                *(undefined1 *)puVar3 = 0;
              }
              goto LAB_10017620a;
            }
            uVar11 = FUN_1001cc310();
            cVar4 = _os_log_type_enabled(uVar11,0x10);
            if (cVar4 != '\0') {
              FUN_100682500(uVar11);
            }
          }
        }
        else {
          if (iVar12 != 0x75726c74) goto LAB_10017658e;
          if ((*(byte *)(param_1 + 3) & 4) == 0) {
            return 0xffffffce;
          }
          lVar9 = *(long *)(param_1 + 0xe);
          if (lVar9 == 0) {
            local_50 = (long *)(param_1 + 0xe);
            uVar5 = FUN_100177051(*(undefined8 *)(param_1 + 6),0x75726c74);
            if (uVar5 != 0) {
              uVar6 = (ulong)uVar5;
              uVar11 = FUN_1001cc310();
              cVar4 = _os_log_type_enabled(uVar11,0x10);
              if (cVar4 == '\0') {
                return uVar6;
              }
              FUN_10068233c(uVar6,uVar11);
              return uVar6;
            }
            lVar9 = *local_50;
          }
          psVar7 = (short *)FUN_1001773b9(lVar9,iVar13,param_4,0);
          if (psVar7 == (short *)0x0) {
            return 0xffffffce;
          }
          iVar13 = FUN_10015bb96(*(undefined8 *)(param_1 + 6),0,0x63686170,(int)*psVar7,0);
          if (iVar13 == 0) {
            uVar11 = FUN_1001cc310();
            cVar4 = _os_log_type_enabled(uVar11,0x10);
            if (cVar4 != '\0') {
              FUN_10068241e(uVar11);
            }
          }
          else {
            pvVar8 = (void *)FUN_10015c089(*(undefined8 *)(param_1 + 6),iVar13,0x75726c74,1,local_48
                                          );
            if (pvVar8 != (void *)0x0) {
              if (param_5 < local_48[0]) {
                local_48[0] = param_5;
              }
              uVar5 = local_48[0];
              _memcpy(local_38,pvVar8,(ulong)local_48[0]);
              if (uVar5 < 2) {
                return 0;
              }
              uVar6 = 0;
              do {
                puVar2 = (ushort *)((long)local_38 + uVar6 * 2);
                *puVar2 = *puVar2 << 8 | *puVar2 >> 8;
                uVar6 = uVar6 + 1;
              } while (uVar5 >> 1 != uVar6);
              return 0;
            }
            uVar11 = FUN_1001cc310();
            cVar4 = _os_log_type_enabled(uVar11,0x10);
            if (cVar4 != '\0') {
              FUN_1006823a8(uVar11);
            }
          }
        }
        goto LAB_1001761b6;
      }
      if (iVar12 == 0x70746368) {
        if ((*(byte *)(param_1 + 3) & 2) == 0) {
          return 0xffffffce;
        }
        if (*(long *)(param_1 + 8) == 0) {
          return 0xffffffce;
        }
        lVar9 = *(long *)(param_1 + 0xc);
        if (lVar9 == 0) {
          uVar5 = FUN_100177051(*(undefined8 *)(param_1 + 6),0x706c6f63,param_1 + 0xc);
          if (uVar5 != 0) {
            uVar6 = (ulong)uVar5;
            uVar11 = FUN_1001cc310();
            cVar4 = _os_log_type_enabled(uVar11,0x10);
            if (cVar4 == '\0') {
              return uVar6;
            }
            FUN_1006822d0(uVar6,uVar11);
            return uVar6;
          }
          lVar9 = *(long *)(param_1 + 0xc);
        }
        lVar9 = FUN_1001773b9(lVar9,iVar13,param_4,0);
        if (lVar9 == 0) {
          return 0xffffffce;
        }
        iVar13 = FUN_10015bc21(*(undefined8 *)(param_1 + 8),0,0x63686170,*(undefined4 *)(lVar9 + 4),
                               0);
        if (iVar13 == 0) {
          return 0xffffffce;
        }
        puVar10 = (undefined8 *)
                  FUN_10015c089(*(undefined8 *)(param_1 + 8),iVar13,0x70746368,1,local_48);
        if (puVar10 == (undefined8 *)0x0) {
          return 0xffffffce;
        }
        if (local_48[0] != 8) {
          return 0xffffffce;
        }
        uVar6 = FUN_1001705fc(*puVar10);
        *local_38 = uVar6;
      }
      else {
        if (iVar12 != 0x736d7044) goto LAB_10017658e;
        uVar6 = FUN_1001705fc(*(undefined8 *)(param_1 + 0x16));
        *param_6 = uVar6;
      }
    }
LAB_10017620a:
    uVar6 = 0;
  }
  return uVar6;
}

