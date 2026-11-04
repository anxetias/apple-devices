// name: FUN_10021c178
// address: 10021c178

int FUN_10021c178(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
                 ,undefined8 param_6)

{
  undefined4 in_EAX;
  int iVar1;
  int iVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0x38) != 0) {
    _AudioComponentInstanceDispose();
  }
  if ((*(int *)(param_2 + 0x20) == 0) || (lVar3 = *(long *)(param_1 + 0x28), lVar3 == 0)) {
    lVar3 = *(long *)(param_1 + 0x18);
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  iVar1 = _AudioComponentInstanceNew(lVar3);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x408) = 0;
    iVar2 = _AudioCodecGetProperty
                      (*(undefined8 *)(param_1 + 0x38),0x73726371,&stack0xffffffffffffffdc,
                       (undefined4 *)(param_1 + 0x408),param_5,param_6,CONCAT44(4,in_EAX));
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x408) = 0;
    }
    *(undefined4 *)(param_1 + 0x40c) = 0x3e800;
    iVar2 = _AudioCodecGetProperty
                      (*(undefined8 *)(param_1 + 0x38),0x62726174,&stack0xffffffffffffffdc,
                       (undefined4 *)(param_1 + 0x40c));
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x40c) = 0x3e800;
    }
  }
  return iVar1;
}

