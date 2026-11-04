// name: FUN_10062f6cc
// address: 10062f6cc

void FUN_10062f6cc(long param_1,byte param_2,long param_3,ulong param_4,char param_5,long *param_6)

{
  int iVar1;
  undefined *puVar2;
  byte bVar3;
  char cVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  uint uVar11;
  bool bVar12;
  undefined1 local_40;
  undefined8 local_38;
  
  uVar7 = (*(code *)PTR__objc_msgSend_10082c770)
                    (PTR__OBJC_CLASS___NSMutableArray_10082dfa0,PTR_s_array_10088c210);
  local_38 = (undefined *)_objc_retainAutoreleasedReturnValue(uVar7);
  uVar11 = 0xffffffff;
  if (param_3 != 0xffffffff) {
    uVar11 = (uint)param_3;
    iVar10 = (uVar11 & 0xe00) * 0x20;
    iVar1 = iVar10 + 0x60000;
    if ((uVar11 >> 0xc & 1) == 0) {
      iVar1 = iVar10;
    }
    uVar11 = (uVar11 & 0x3e000) << 7 | iVar1 + (uVar11 & 0xff) + (uVar11 & 0x100) * 4;
  }
  if (param_4 != 0) {
    if (param_3 == 0xb1 && (param_4 & 4) == 0) {
      uVar11 = uVar11 | 8;
    }
  }
  if (param_1 == 0) {
    uVar7 = (*(code *)PTR__objc_msgSend_10082c770)
                      (PTR__OBJC_CLASS___NSError_10082c660,
                       PTR_s_errorWithDomain_code_userInfo__10088c9f8,
                       *(undefined8 *)PTR__NSOSStatusErrorDomain_10082c608,0xffffffffffffffe4,0);
    lVar8 = _objc_retainAutoreleasedReturnValue(uVar7);
    if (lVar8 != 0) {
      if ((param_6 != (long *)0x0) && (*param_6 == 0)) {
        lVar9 = _objc_retainAutorelease(lVar8);
        *param_6 = lVar9;
      }
      puVar2 = PTR__objc_release_10082c7b0;
      (*(code *)PTR__objc_release_10082c7b0)(local_38);
      (*(code *)puVar2)(lVar8);
      local_38 = PTR____NSArray0__struct_10082dfe8;
    }
  }
  else {
    uVar5 = FUN_100177d88();
    lVar8 = FUN_1002f930c(param_1);
    puVar2 = PTR_s_addObject__10088c218;
    local_40 = param_2 & 0xf;
    for (; lVar8 != 0; lVar8 = FUN_1002f9451(lVar8)) {
      bVar12 = true;
      if ((*(byte *)(param_1 + 0x1bb4) & 0x40) != 0) {
        bVar3 = FUN_100474865(lVar8);
        bVar12 = (local_40 & bVar3) != 0;
      }
      if ((param_3 == 0xffffffff) || (!bVar12)) {
LAB_10062f810:
        if ((param_4 != 0) && (bVar12)) {
          cVar4 = FUN_1002bd328(lVar8);
          if (cVar4 == '\0') {
            bVar12 = false;
          }
          else {
            cVar4 = FUN_1002bd244(lVar8);
            bVar12 = cVar4 == '\0';
          }
        }
        if (bVar12) {
          uVar7 = FUN_10062bcd0(lVar8,(int)param_5,uVar5);
          lVar9 = _objc_retainAutoreleasedReturnValue(uVar7);
          if (lVar9 != 0) {
            (*(code *)PTR__objc_msgSend_10082c770)(local_38,puVar2,lVar9);
          }
          (*(code *)PTR__objc_release_10082c7b0)(lVar9);
        }
      }
      else {
        uVar6 = FUN_1004744bf(lVar8,0);
        if (((uVar6 & uVar11) != 0) && ((uVar6 & ~uVar11 & 0x20a004) == 0)) goto LAB_10062f810;
      }
    }
  }
  _objc_autoreleaseReturnValue(local_38);
  return;
}

