// name: FUN_1006313a2
// address: 1006313a2

void FUN_1006313a2(long param_1,ulong param_2,long param_3,ulong param_4,long *param_5)

{
  int iVar1;
  undefined *puVar2;
  long *plVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  int iVar11;
  long *plVar12;
  bool bVar13;
  undefined1 local_78 [16];
  long *local_68;
  long local_60 [2];
  uint uStack_4c;
  ulong local_48;
  undefined *local_40;
  uint local_34;
  
  local_48 = param_2;
  uVar7 = (*(code *)PTR__objc_msgSend_10082c770)
                    (PTR__OBJC_CLASS___NSMutableArray_10082dfa0,PTR_s_array_10088c210);
  local_40 = (undefined *)_objc_retainAutoreleasedReturnValue(uVar7);
  local_34 = 0xffffffff;
  if (param_3 != 0xffffffff) {
    uVar6 = (uint)param_3;
    iVar11 = (uVar6 & 0xe00) * 0x20;
    iVar1 = iVar11 + 0x60000;
    if ((uVar6 >> 0xc & 1) == 0) {
      iVar1 = iVar11;
    }
    local_34 = (uVar6 & 0x3e000) << 7 | iVar1 + (uVar6 & 0xff) + (uVar6 & 0x100) * 4;
  }
  if ((param_4 != 0) && (param_3 == 0xb1 && (param_4 & 4) == 0)) {
    local_34 = local_34 | 8;
  }
  if (param_1 == 0) {
    uVar7 = (*(code *)PTR__objc_msgSend_10082c770)
                      (PTR__OBJC_CLASS___NSError_10082c660,
                       PTR_s_errorWithDomain_code_userInfo__10088c9f8,
                       *(undefined8 *)PTR__NSOSStatusErrorDomain_10082c608,0xffffffffffffffe4,0);
    lVar8 = _objc_retainAutoreleasedReturnValue(uVar7);
    if (lVar8 != 0) {
      if ((param_5 != (long *)0x0) && (*param_5 == 0)) {
        lVar10 = _objc_retainAutorelease(lVar8);
        *param_5 = lVar10;
      }
      puVar2 = PTR__objc_release_10082c7b0;
      (*(code *)PTR__objc_release_10082c7b0)(local_40);
      (*(code *)puVar2)(lVar8);
      local_40 = PTR____NSArray0__struct_10082dfe8;
    }
  }
  else {
    local_68 = local_60;
    local_60[0] = 0;
    local_60[1] = 0;
    lVar8 = FUN_1002f930c(param_1);
    local_48 = local_48 & 0xffffffffffffff0f;
    uStack_4c = ~local_34 & 0x20a004;
    for (; puVar2 = PTR_s_addObject__10088c218, lVar8 != 0; lVar8 = FUN_1002f9451(lVar8)) {
      if (*(int *)(lVar8 + 0xf0) != 0) {
        bVar13 = true;
        if ((*(byte *)(param_1 + 0x1bb4) & 0x40) != 0) {
          bVar4 = FUN_100474865(lVar8);
          bVar13 = ((byte)local_48 & bVar4) != 0;
        }
        if (((param_3 == 0xffffffff) || (!bVar13)) ||
           ((uVar6 = FUN_1004744bf(lVar8,0), (local_34 & uVar6) != 0 && ((uVar6 & uStack_4c) == 0)))
           ) {
          if ((param_4 != 0) && (bVar13)) {
            cVar5 = FUN_1002bd328(lVar8);
            if (cVar5 == '\0') {
              bVar13 = false;
            }
            else {
              cVar5 = FUN_1002bd244(lVar8);
              bVar13 = cVar5 == '\0';
            }
          }
          if (bVar13) {
            FUN_1003a5708(&local_68);
          }
        }
      }
    }
    if (local_68 != local_60) {
      plVar9 = local_68;
      do {
        FUN_1001ddc17(local_78,param_1 + 0x1df0,*(undefined4 *)((long)plVar9 + 0x1c),0);
        uVar7 = FUN_1001bdcb0(local_78,0);
        uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
        (*(code *)PTR__objc_msgSend_10082c770)(local_40,puVar2,uVar7);
        (*(code *)PTR__objc_release_10082c7b0)(uVar7);
        FUN_1001b7a50(local_78);
        plVar3 = (long *)plVar9[1];
        plVar12 = plVar9;
        if ((long *)plVar9[1] == (long *)0x0) {
          do {
            plVar9 = (long *)plVar12[2];
            bVar13 = (long *)*plVar9 != plVar12;
            plVar12 = plVar9;
          } while (bVar13);
        }
        else {
          do {
            plVar9 = plVar3;
            plVar3 = (long *)*plVar9;
          } while ((long *)*plVar9 != (long *)0x0);
        }
      } while (plVar9 != local_60);
    }
    FUN_1002a41f4(&local_68,local_60[0]);
  }
  _objc_autoreleaseReturnValue(local_40);
  return;
}

