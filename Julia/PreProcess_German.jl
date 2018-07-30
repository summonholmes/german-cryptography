function PreProcess_German(rawtext) # Simple regex
    return replace(lowercase(rawtext), r"[-,.:;!?\n ]", "")
end