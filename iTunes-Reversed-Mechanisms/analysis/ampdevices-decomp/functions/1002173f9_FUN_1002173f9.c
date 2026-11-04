// name: FUN_1002173f9
// address: 1002173f9

undefined8 FUN_1002173f9(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_1 != 0) {
    lVar1 = _AMRestorableGetCheckpointData();
    if (lVar1 != 0) {
      uVar2 = _RestoreCheckpointCreateCheckpointFingerprint(lVar1);
      return uVar2;
    }
  }
  return 0;
}

