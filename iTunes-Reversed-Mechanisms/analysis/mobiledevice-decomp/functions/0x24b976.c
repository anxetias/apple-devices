// rea decompile_all
// name: SERestoreInfo::P73BaseDeviceInfo::init
// address: 0x24b976
// body: available
// range: 0x24b976-0x24ba30 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* SERestoreInfo::P73BaseDeviceInfo::init() */

void __thiscall SERestoreInfo::P73BaseDeviceInfo::init(P73BaseDeviceInfo *this)

{
  uchar local_1d [5];
  
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 8) = 1;
  local_1d[0] = '\0';
  std::vector<unsigned_char,std::allocator<unsigned_char>>::assign
            ((vector<unsigned_char,std::allocator<unsigned_char>> *)(this + 0x20),0x18,local_1d);
  local_1d[1] = 0;
  std::vector<unsigned_char,std::allocator<unsigned_char>>::assign
            ((vector<unsigned_char,std::allocator<unsigned_char>> *)(this + 0x40),0x14,local_1d + 1)
  ;
  local_1d[2] = 0;
  std::vector<unsigned_char,std::allocator<unsigned_char>>::assign
            ((vector<unsigned_char,std::allocator<unsigned_char>> *)(this + 0x58),0x20,local_1d + 2)
  ;
  local_1d[3] = 0;
  std::vector<unsigned_char,std::allocator<unsigned_char>>::assign
            ((vector<unsigned_char,std::allocator<unsigned_char>> *)(this + 0x70),0x20,local_1d + 3)
  ;
  *(undefined8 *)(this + 0x8c) = 0;
  *(undefined4 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0xc) = 0;
  *(undefined8 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x1c) = 0x5a9b;
  local_1d[4] = 0;
  std::vector<unsigned_char,std::allocator<unsigned_char>>::assign
            ((vector<unsigned_char,std::allocator<unsigned_char>> *)(this + 0x98),0x20,local_1d + 4)
  ;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 0xb8) = 0;
  return;
}

