// rea decompile_all
// name: PRGH_SwapElementEndian
// address: 0x1b9794
// body: available
// range: 0x1b9794-0x1b98ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* PRGH_SwapElementEndian(void*, unsigned int, void const*) */

undefined8 PRGH_SwapElementEndian(void *param_1,uint param_2,void *param_3)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  switch(param_2) {
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1e:
    lVar1 = 0;
    do {
      auVar2 = pshufb(ZEXT416(*(uint *)((long)param_1 + lVar1 * 4)),ZEXT416(0x10203));
      *(int *)((long)param_1 + lVar1 * 4) = auVar2._0_4_;
      lVar1 = lVar1 + 1;
    } while (lVar1 != 5);
    return 0;
  case 0xb:
    swap_MemoryMapElementStructType_endian(param_1);
    break;
  case 0xc:
    swap_DownloadDataElementStructType_endian(param_1);
    break;
  case 0xd:
    swap_HardwareElementStructType_endian(param_1);
    break;
  case 0xe:
    lVar1 = 0;
    do {
      auVar2 = pshufb(ZEXT416(*(uint *)((long)param_1 + lVar1 * 4)),ZEXT416(0x10203));
      *(int *)((long)param_1 + lVar1 * 4) = auVar2._0_4_;
      lVar1 = lVar1 + 1;
    } while (lVar1 != 0x11f);
    return 0;
  case 0xf:
    swap_SecurityElementStructType_endian(param_1);
    break;
  case 0x10:
    swap_TocElementStructType_endian(param_1,param_3);
    break;
  case 0x11:
    lVar1 = 0;
    do {
      auVar2 = pshufb(ZEXT416(*(uint *)((long)param_1 + lVar1 * 4)),ZEXT416(0x10203));
      *(int *)((long)param_1 + lVar1 * 4) = auVar2._0_4_;
      lVar1 = lVar1 + 1;
    } while (lVar1 != 7);
    return 0;
  case 0x12:
  case 0x13:
    swap_InjectionElementStructType_endian(param_1);
    break;
  case 0x14:
  case 0x15:
  case 0x16:
    swap_VersionDataElementStructType_endian(param_1);
    break;
  case 0x17:
  case 0x18:
  case 0x19:
    swap_StorageDataElementStructType_endian(param_1);
    break;
  case 0x1d:
    swap_IndirectDownloadDataElementStructType_endian(param_1);
    break;
  default:
    if (param_2 != 1000) {
      return 1;
    }
    lVar1 = 0;
    do {
      auVar2 = pshufb(ZEXT416(*(uint *)((long)param_1 + lVar1 * 4)),ZEXT416(0x10203));
      *(int *)((long)param_1 + lVar1 * 4) = auVar2._0_4_;
      lVar1 = lVar1 + 1;
    } while (lVar1 != 10);
    return 0;
  }
  return 0;
}

