// rea decompile_all
// name: __readDictionary
// address: 0xc3064
// body: available
// range: 0xc3064-0xc32a0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long __readDictionary(uint param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  ssize_t sVar4;
  void *pvVar5;
  long lVar6;
  long lVar7;
  char *pcVar8;
  FILE *pFVar9;
  ulong uVar10;
  size_t sVar11;
  uint local_c8 [34];
  undefined8 local_40;
  uint local_34;
  
  uVar10 = (ulong)param_1;
  local_34 = 0;
  ___readDictionary_timeout = 30000000;
  _DAT_004a3b20 = 0;
  if ((int)param_1 < 0) {
    _fprintf(*(FILE **)PTR____stderrp_004412c0,
             "%s: Bad read descriptor passed to _readDictionary: %d\n",param_2,uVar10);
    return 0;
  }
  if (param_1 < 3) {
    _fprintf(*(FILE **)PTR____stderrp_004412c0,
             "%s: Read descriptor is %d, which may be a problem. Continuing ahead blindly.\n",
             param_2,uVar10);
  }
  local_c8[0x1c] = 0;
  local_c8[0x1d] = 0;
  local_c8[0x1e] = 0;
  local_c8[0x1f] = 0;
  local_c8[0x18] = 0;
  local_c8[0x19] = 0;
  local_c8[0x1a] = 0;
  local_c8[0x1b] = 0;
  local_c8[0x14] = 0;
  local_c8[0x15] = 0;
  local_c8[0x16] = 0;
  local_c8[0x17] = 0;
  local_c8[0x10] = 0;
  local_c8[0x11] = 0;
  local_c8[0x12] = 0;
  local_c8[0x13] = 0;
  local_c8[0xc] = 0;
  local_c8[0xd] = 0;
  local_c8[0xe] = 0;
  local_c8[0xf] = 0;
  local_c8[8] = 0;
  local_c8[9] = 0;
  local_c8[10] = 0;
  local_c8[0xb] = 0;
  local_c8[4] = 0;
  local_c8[5] = 0;
  local_c8[6] = 0;
  local_c8[7] = 0;
  local_c8[0] = 0;
  local_c8[1] = 0;
  local_c8[2] = 0;
  local_c8[3] = 0;
  if ((PTR____darwin_check_fd_set_overflow_004412b0 == (undefined *)0x0) ||
     (iVar2 = ___darwin_check_fd_set_overflow(uVar10,local_c8,0), iVar2 != 0)) {
    local_c8[param_1 >> 5] = local_c8[param_1 >> 5] | 1 << ((byte)param_1 & 0x1f);
  }
  do {
    iVar2 = _select_1050(param_1 + 1,local_c8,0,0,&__readDictionary_timeout);
    if (iVar2 != -1) {
      if (0 < iVar2) {
        sVar4 = _read(param_1,&local_34,4);
        if (sVar4 < 4) {
          return 0;
        }
        uVar10 = (ulong)local_34;
        pvVar5 = _calloc(uVar10,1);
        if (uVar10 != 0) goto LAB_000c31e9;
        goto LAB_000c3209;
      }
      break;
    }
    piVar3 = ___error();
  } while (*piVar3 == 4);
  _fprintf(*(FILE **)PTR____stderrp_004412c0,"%s: Error or timeout on select\n",param_2);
  return 0;
  while (sVar11 = uVar10 - (long)(int)sVar4, bVar1 = (long)(int)sVar4 <= (long)uVar10,
        uVar10 = sVar11, sVar11 != 0 && bVar1) {
LAB_000c31e9:
    sVar4 = _read(param_1,(void *)((local_34 - uVar10) + (long)pvVar5),uVar10);
    if (sVar4 < 1) {
      pFVar9 = *(FILE **)PTR____stderrp_004412c0;
      pcVar8 = "%s: Can\'t read data\n";
      goto LAB_000c3287;
    }
  }
LAB_000c3209:
  local_40 = 0;
  lVar6 = _CFDataCreate(0,pvVar5,local_34);
  if (lVar6 == 0) {
    pFVar9 = *(FILE **)PTR____stderrp_004412c0;
    pcVar8 = "%s: Can\'t create CFData for read data\n";
LAB_000c3287:
    lVar7 = 0;
    _fprintf(pFVar9,pcVar8,param_2);
  }
  else {
    lVar7 = _CFPropertyListCreateFromXMLData(0,lVar6,0,&local_40);
    if (lVar7 == 0) {
      _fprintf(*(FILE **)PTR____stderrp_004412c0,"%s: Can\'t create dictionary from data\n",param_2)
      ;
    }
    _CFRelease(lVar6);
  }
  _free(pvVar5);
  return lVar7;
}

