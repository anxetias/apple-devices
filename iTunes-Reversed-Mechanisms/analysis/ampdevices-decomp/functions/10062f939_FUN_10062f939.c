// name: FUN_10062f939
// address: 10062f939

void FUN_10062f939(long param_1,byte param_2,long param_3,ulong param_4,char param_5,char param_6,
                  long *param_7)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  char cVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  byte local_58;
  undefined *local_40;
  uint local_34;
  
  uVar8 = (*(code *)PTR__objc_msgSend_10082c770)
                    (PTR__OBJC_CLASS___NSMutableArray_10082dfa0,PTR_s_array_10088c210);
  local_40 = (undefined *)_objc_retainAutoreleasedReturnValue(uVar8);
  local_34 = 0xffffffff;
  if (param_3 != 0xffffffff) {
    uVar7 = (uint)param_3;
    iVar12 = (uVar7 & 0xe00) * 0x20;
    iVar1 = iVar12 + 0x60000;
    if ((uVar7 >> 0xc & 1) == 0) {
      iVar1 = iVar12;
    }
    local_34 = (uVar7 & 0x3e000) << 7 | iVar1 + (uVar7 & 0xff) + (uVar7 & 0x100) * 4;
  }
  if ((param_4 != 0) && (param_3 == 0xb1 && (param_4 & 4) == 0)) {
    local_34 = local_34 | 8;
  }
  if (param_1 == 0) {
    uVar8 = (*(code *)PTR__objc_msgSend_10082c770)
                      (PTR__OBJC_CLASS___NSError_10082c660,
                       PTR_s_errorWithDomain_code_userInfo__10088c9f8,
                       *(undefined8 *)PTR__NSOSStatusErrorDomain_10082c608,0xffffffffffffffe4,0);
    lVar10 = _objc_retainAutoreleasedReturnValue(uVar8);
    if (lVar10 != 0) {
      if ((param_7 != (long *)0x0) && (*param_7 == 0)) {
        lVar11 = _objc_retainAutorelease(lVar10);
        *param_7 = lVar11;
      }
      puVar2 = PTR__objc_release_10082c7b0;
      (*(code *)PTR__objc_release_10082c7b0)(local_40);
      (*(code *)puVar2)(lVar10);
      local_40 = PTR____NSArray0__struct_10082dfe8;
    }
  }
  else {
    uVar6 = FUN_100177d88();
    puVar3 = PTR_s_addObject__10088c218;
    puVar2 = PTR_s_setObject_forKey__10088c000;
    iVar1 = *(int *)(param_1 + 0x98);
    if (iVar1 != 0) {
      local_58 = param_2 & 0xf;
      iVar12 = 0;
      do {
        uVar8 = FUN_1002f8ed5(param_1,iVar12,0);
        if (((*(byte *)(param_1 + 0x1bb4) & 0x40) == 0) ||
           (bVar4 = FUN_100482222(uVar8,1), (local_58 & bVar4) != 0)) {
          if (param_4 == 0) {
            if ((param_3 == 0xffffffff) ||
               ((uVar7 = FUN_1004919da(uVar8,0), (local_34 & uVar7) != 0 &&
                ((uVar7 & ~local_34 & 0x20a004) == 0)))) goto LAB_10062faeb;
          }
          else {
            cVar5 = FUN_1002be2ea(uVar8,(byte)((param_4 & 0xffffffff) >> 3) & 1,
                                  (byte)((param_4 & 0xffffffff) >> 1) & 1,local_34,
                                  ~local_34 & 0x20a004);
            if (cVar5 != '\0') {
LAB_10062faeb:
              uVar9 = FUN_10062eb8b(uVar8,(int)param_6,uVar6);
              lVar10 = _objc_retainAutoreleasedReturnValue(uVar9);
              if (lVar10 != 0) {
                if (param_5 != '\0') {
                  uVar8 = FUN_10062f5e0(uVar8);
                  lVar11 = _objc_retainAutoreleasedReturnValue(uVar8);
                  if (lVar11 != 0) {
                    (*(code *)PTR__objc_msgSend_10082c770)(lVar10,puVar2,lVar11,&cf_TrackIDs);
                  }
                  (*(code *)PTR__objc_release_10082c7b0)(lVar11);
                }
                (*(code *)PTR__objc_msgSend_10082c770)(local_40,puVar3,lVar10);
              }
              (*(code *)PTR__objc_release_10082c7b0)(lVar10);
            }
          }
        }
        iVar12 = iVar12 + 1;
      } while (iVar1 != iVar12);
    }
  }
  _objc_autoreleaseReturnValue(local_40);
  return;
}

