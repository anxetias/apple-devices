// name: FUN_100384b7c
// address: 100384b7c

void FUN_100384b7c(undefined8 *param_1)

{
  uint uVar1;
  ID IVar2;
  long lVar3;
  ID IVar4;
  ulong uVar5;
  ulong uVar6;
  
  IVar2 = _objc_alloc(PTR__OBJC_CLASS___AMPArtworkSourceInfo_10082b4d8);
  IVar2 = AMPArtworkSourceInfo::initWithID_forDBID_
                    (IVar2,PTR_s_initWithID_forDBID__10088c968,param_1[1],*param_1);
  lVar3 = FUN_1001ab132(param_1 + 3);
  if (lVar3 != 0) {
    IVar4 = _objc_alloc(PTR__OBJC_CLASS___NSURL_10082dfd8);
    IVar4 = NSURL::initWithString_(IVar4,PTR_s_initWithString__10088c970,param_1[3]);
    AMPArtworkSourceInfo::setUrl_(IVar2,PTR_s_setUrl__10088c978,IVar4);
    (*(code *)PTR__objc_release_10082c7b0)(IVar4);
  }
  lVar3 = FUN_1001ab132(param_1 + 4);
  if (lVar3 != 0) {
    AMPArtworkSourceInfo::setToken_(IVar2,PTR_s_setToken__10088c980,param_1[4]);
  }
  lVar3 = FUN_1001ab132(param_1 + 5);
  if (lVar3 != 0) {
    AMPArtworkSourceInfo::setStoreID_(IVar2,PTR_s_setStoreID__10088c988,param_1[5]);
  }
  AMPArtworkSourceInfo::setDbID_(IVar2,PTR_s_setDbID__10088c990,*param_1);
  AMPArtworkSourceInfo::setPersistentID_(IVar2,PTR_s_setPersistentID__10088c998,param_1[1]);
  AMPArtworkSourceInfo::setRemoteID_(IVar2,PTR_s_setRemoteID__10088c9a0,param_1[6]);
  uVar1 = *(uint *)(param_1 + 2);
  uVar6 = 0;
  uVar5 = 0;
  if ((int)uVar1 < 0x3c) {
    switch(uVar1) {
    case 6:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0x10:
    case 0x11:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x1a:
    case 0x1b:
    case 0x2a:
    case 0x2b:
    case 0x2c:
    case 0x2d:
    case 0x2f:
      goto switchD_100384ca2_caseD_6;
    default:
      goto switchD_100384ca2_caseD_7;
    }
  }
  if ((int)uVar1 < 100) {
    if ((int)uVar1 < 0x41) {
      if ((uVar1 != 0x3c) && (uVar1 != 0x3f)) goto switchD_100384ca2_caseD_7;
    }
    else if ((uVar1 != 0x41) && (uVar6 = uVar5, uVar1 != 0x46)) goto switchD_100384ca2_caseD_7;
  }
  else if ((int)uVar1 < 0x66) {
    if ((uVar1 != 100) && (uVar6 = uVar5, uVar1 != 0x65)) goto switchD_100384ca2_caseD_7;
  }
  else if ((uVar1 != 0x66) && (uVar6 = uVar5, uVar1 != 200)) goto switchD_100384ca2_caseD_7;
switchD_100384ca2_caseD_6:
  uVar6 = (ulong)uVar1;
switchD_100384ca2_caseD_7:
  AMPArtworkSourceInfo::setKind_(IVar2,PTR_s_setKind__10088c9a8,uVar6);
  _objc_autoreleaseReturnValue(IVar2);
  return;
}

