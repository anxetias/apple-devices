// name: FUN_1004b4b7b
// address: 1004b4b7b

void FUN_1004b4b7b(long param_1)

{
  long lVar1;
  double dVar2;
  undefined8 uVar3;
  double dVar4;
  
  if (*(char *)(param_1 + 0x100) == '\0') {
    if (((*(long *)(param_1 + 0x110) < 1) || (*(double *)(param_1 + 0x118) <= 0.0)) ||
       (lVar1 = *(long *)(param_1 + 0xf8) + 1, *(long *)(param_1 + 0xf8) = lVar1,
       lVar1 < *(int *)(param_1 + 0xf0))) goto LAB_1004b4bda;
    *(undefined1 *)(param_1 + 0x100) = 1;
    dVar2 = (double)FUN_1001ebd46();
    *(double *)(param_1 + 0x108) =
         (double)*(long *)(param_1 + 0x110) / (dVar2 - *(double *)(param_1 + 0x118));
    if (*(char *)(param_1 + 0x100) == '\0') goto LAB_1004b4bda;
  }
  dVar2 = (double)FUN_1001ebd46();
  dVar4 = (double)*(long *)(param_1 + 0x110) / (dVar2 - *(double *)(param_1 + 0x118));
  dVar2 = *(double *)(param_1 + 0x108);
  if ((dVar2 != 0.0) || (NAN(dVar2))) {
    dVar4 = dVar4 * *(double *)(param_1 + 0xd8) + dVar2 * *(double *)(param_1 + 0xe0);
  }
  *(double *)(param_1 + 0x108) = dVar4;
LAB_1004b4bda:
  uVar3 = FUN_1001ebd46();
  *(undefined8 *)(param_1 + 0x118) = uVar3;
  *(undefined8 *)(param_1 + 0x110) = 0;
  return;
}

