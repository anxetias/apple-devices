// name: FUN_1004e8318
// address: 1004e8318

void FUN_1004e8318(long param_1,char param_2)

{
  double dVar1;
  char cVar2;
  int iVar3;
  bool bVar4;
  double dVar5;
  
  if ((*(char *)(param_1 + 0x35a) == '\0') || (*(char *)(param_1 + 0x6aef) != '\0')) {
    bVar4 = false;
  }
  else {
    cVar2 = FUN_1001cd44e("AutomaticDeviceBackupsDisabled",0,0);
    bVar4 = cVar2 == '\0';
    if (bVar4 && param_2 == '\0') {
      dVar1 = *(double *)(param_1 + 0x151e8);
      if ((dVar1 == 0.0) && (!NAN(dVar1))) {
        return;
      }
      iVar3 = FUN_1001cd9a6("device-backup-interval",0x1c20,0);
      dVar5 = (double)FUN_1001711e2();
      bVar4 = true;
      if (dVar5 < dVar1 + (double)iVar3) {
        return;
      }
    }
  }
  *(bool *)(param_1 + 0x6af0) = bVar4;
  return;
}

