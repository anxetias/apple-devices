// name: FUN_10011d792
// address: 10011d792

undefined8 FUN_10011d792(long *param_1,undefined8 *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  bool bVar7;
  
  if ((char)param_1[0x397c] == '\0') {
                    /* WARNING: Could not recover jumptable at 0x00010011d91d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (**(code **)(*param_1 + 0x78))(param_1,param_2);
    return uVar6;
  }
  bVar7 = *(int *)param_1[0xf] == 2;
  param_1[0x1821] = (long)(param_1 + 0x8d);
  plVar5 = (long *)param_1[0x184c];
  lVar1 = plVar5[1];
  if (bVar7) {
    FUN_100115ae4(param_1,(int *)param_1[0xf],param_1 + 0x8d,lVar1,0);
    iVar4 = FUN_100115cd2(param_1,param_1[0xf],param_1[0x1821],lVar1);
    if (iVar4 != 0) {
      return 0xfffffffe;
    }
    plVar5 = (long *)param_1[0x184c];
    *(undefined1 *)(plVar5[1] + 0x115) =
         *(undefined1 *)(param_1[0x1821] + 0xbbe + (ulong)*(byte *)(param_1[0x1821] + 0xbbd));
    if (*(int *)(param_1[0xf] + 4) == 3) {
      iVar4 = FUN_100109df4(param_1[0x397a],param_1[0x1827]);
      if (iVar4 != 0) {
        return 0xfffffffe;
      }
      plVar5 = (long *)param_1[0x184c];
    }
  }
  lVar2 = *plVar5;
  uVar6 = 0xfffffffe;
  if (lVar2 != 0) {
    lVar3 = param_1[0xf];
    if (*(int *)(lVar3 + 4) == 3) {
      FUN_10010a6be(param_1[0x397a],lVar3,lVar2,*(undefined8 *)param_1[0x184d],param_1[0x1821],lVar1
                    ,*param_2,bVar7);
      iVar4 = FUN_10010a702(param_1[0x397a]);
      *param_3 = *(long *)param_1[0x184c] + 0xe60;
      param_3[1] = *(long *)param_1[0x184d] + 0xe60;
      if (iVar4 != 0) {
        return 0xfffffffe;
      }
    }
    else {
      FUN_100119916(param_1[0x1858],lVar3,lVar2,param_1[0x1821],lVar1,*param_2,0,bVar7);
      iVar4 = FUN_100119958(param_1[0x1858],*(undefined8 *)(param_1[0x1858] + 0x48));
      _memcpy((void *)(*(long *)param_1[0x184d] + 0xe60),(void *)(*(long *)param_1[0x184c] + 0xe60),
              0x2000);
      if (iVar4 != 0) {
        return 0xfffffffe;
      }
      *param_3 = *(long *)param_1[0x184c] + 0xe60;
      param_3[1] = *(long *)param_1[0x184d] + 0xe60;
    }
    uVar6 = 0;
  }
  return uVar6;
}

