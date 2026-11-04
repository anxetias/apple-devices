// name: FUN_10062fcdd
// address: 10062fcdd

void FUN_10062fcdd(long param_1,byte param_2,int param_3,char param_4,char param_5,long *param_6)

{
  int iVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  byte local_38;
  
  if (param_1 == 0) {
    lVar7 = 0;
    uVar6 = (*(code *)PTR__objc_msgSend_10082c770)
                      (PTR__OBJC_CLASS___NSError_10082c660,
                       PTR_s_errorWithDomain_code_userInfo__10088c9f8,
                       *(undefined8 *)PTR__NSOSStatusErrorDomain_10082c608,0xffffffffffffffe4,0);
    lVar5 = _objc_retainAutoreleasedReturnValue(uVar6);
    if (param_6 == (long *)0x0 || lVar5 == 0) goto LAB_10062fdf7;
    if (*param_6 == 0) {
      lVar5 = _objc_retainAutorelease(lVar5);
      *param_6 = lVar5;
    }
  }
  else {
    uVar3 = FUN_100177d88();
    iVar1 = *(int *)(param_1 + 0x98);
    lVar5 = 0;
    if (iVar1 != 0) {
      local_38 = param_2 & 0xf;
      iVar8 = 0;
      do {
        lVar5 = FUN_1002f8ed5(param_1,iVar8,0);
        if ((lVar5 != 0) && (*(short *)(lVar5 + 0x10) != 0)) {
          iVar4 = FUN_10062f350(*(short *)(lVar5 + 0x10),(int)param_5,0);
          if (iVar4 == param_3) {
            if ((*(byte *)(param_1 + 0x1bb4) & 0x40) != 0) {
              bVar2 = FUN_100482222(lVar5,1);
              if ((local_38 & bVar2) == 0) goto LAB_10062fd8b;
            }
            uVar6 = FUN_10062eb8b(lVar5,(int)param_5,uVar3);
            lVar7 = _objc_retainAutoreleasedReturnValue(uVar6);
            if (param_4 != '\0' && lVar7 != 0) {
              uVar6 = FUN_10062f5e0(lVar5);
              lVar5 = _objc_retainAutoreleasedReturnValue(uVar6);
              if (lVar5 != 0) {
                (*(code *)PTR__objc_msgSend_10082c770)
                          (lVar7,PTR_s_setObject_forKey__10088c000,lVar5,&cf_TrackIDs);
              }
              (*(code *)PTR__objc_release_10082c7b0)(lVar5);
            }
            goto LAB_10062fd96;
          }
        }
LAB_10062fd8b:
        iVar8 = iVar8 + 1;
      } while (iVar1 != iVar8);
      lVar7 = 0;
LAB_10062fd96:
      lVar5 = 0;
      goto LAB_10062fdf7;
    }
  }
  lVar7 = 0;
LAB_10062fdf7:
  (*(code *)PTR__objc_release_10082c7b0)(lVar5);
  _objc_autoreleaseReturnValue(lVar7);
  return;
}

