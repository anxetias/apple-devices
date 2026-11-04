// name: FUN_10044a346
// address: 10044a346

void FUN_10044a346(long param_1)

{
  if ((*(long *)(param_1 + 0x28) != 0) && (*(char *)(param_1 + 0x30) == '\x01')) {
    _AVCFAssetExportSessionCancelExport();
    return;
  }
  return;
}

